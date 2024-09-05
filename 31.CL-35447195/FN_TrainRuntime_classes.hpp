#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TrainRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class TrainRuntime.FortTrainCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortTrainCheatManager : public UChildCheatManager	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainCheatManager");
			return ret;
		}

		void TeleportTrainToTrainStartLocation(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414D50298
		void TeleportTrainToCursor(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414D501B8
		void TeleportToTrainStartLocation(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414D500D8
		void TeleportToTrain(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414D4FFF8
		void SetTrainStartLocationToCursor(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414D4FF18
		void SetTrainMoveInPositiveRailDirection(bool bMoveInPositiveRailDirection); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414D4FE38
		void PrintTrainDebug(); // Flags: Final|Exec|Native|Private|Const 0x7FF414D4FD58
	};


	// Class TrainRuntime.FortTrainSpawner
	// Inherited from AActor -> UObject
	// Size: 0xA0 (0x330 - 0x290)
	class AFortTrainSpawner : public AActor	
	{
	public:
		UTrainConfig TrainConfig; // 0x290(0x8)
		FScalableFloat RandomizeSpawnLocation; // 0x298(0x28)
		FScalableFloat ReverseDirection; // 0x2C0(0x28)
		FScalableFloat RandomizeDirection; // 0x2E8(0x28)
		TWeakObjectPtr Rail; // 0x310(0x20)

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
		unsigned char UnknownData03_3[0x14]; // 0x2B8(0x14) UNKNOWN PROPERTY
		bool bCanBeMarked : 1; // 0x2CC:0(0x1)
		bool bBlockMarking : 1; // 0x2CC:1(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x2CD(0x3) UNKNOWN PROPERTY
		FMarkedActorDisplayInfo MarkerDisplay; // 0x2D0(0xA0)
		FVector MarkerPositionOffset; // 0x370(0x18)
		float Length; // 0x388(0x4)
		float ConnectorLength; // 0x38C(0x4)
		UTargetingPreset DestructionTargetingPreset; // 0x390(0x8)
		UTargetingPreset ImpulseTargetingPreset; // 0x398(0x8)
		FScalableFloat DestroyBuildings; // 0x3A0(0x28)
		FScalableFloat DestroyOnlyTargetPlayerBuilds; // 0x3C8(0x28)
		FGameplayTagContainer DestructionActorTags; // 0x3F0(0x20)
		FGameplayTagContainer DestructionIgnoredActorTags; // 0x410(0x20)
		FTargetingRequestHandle DestructionAsyncTargetingHandle; // 0x430(0x4)
		FTargetingRequestHandle ImpulseAsyncTargetingHandle; // 0x434(0x4)
		unsigned char UnknownData05_6[0x8]; // 0x438(0x8) UNKNOWN PROPERTY
		UFortSoundIndicatorComponent OnboardSoundIndicatorComponent; // 0x440(0x8)
		UAudioShapeLineListComponent OnboardAudioShapeLineList; // 0x448(0x8)
		USoundBase TrainMoveSoundCue; // 0x450(0x8)
		USoundControlBus PlayerOnboardControlBus; // 0x458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.TrainCar");
			return ret;
		}

		void OnPawnDebasedTrainCar(AFortPawn Pawn, AActor NewBase); // Flags: Event|Protected|BlueprintEvent 0x7FF414D50A78
		void OnPawnBasedOnTrainCar(AFortPawn Pawn); // Flags: Event|Protected|BlueprintEvent 0x7FF414D50998
		void OnActorTargetedForImpulse(AActor Actor); // Flags: Event|Public|BlueprintEvent 0x7FF414D508B8
		void HandlePossessedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Protected 0x7FF414D507D8
		void HandleMovementBaseChanged(UPrimitiveComponent NewBaseComponent, FName BoneName); // Flags: Final|Native|Protected 0x7FF414D506F8
		FTransform GetTransformAtServerTime(float ServerTime); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D50618
		UFortTrainManager GetTrainManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D50538
		int32_t GetCarIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D50458
		void EnableAudioProcessingForLocalPlayerOnboard(float TimeIntervalToUpdate, UFortSoundIndicatorComponent SoundIndicatorComponent, UAudioShapeLineListComponent AudioShapeLineList, float ControlBusFadeTime); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D50378
	};


	// Class TrainRuntime.TrainConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UTrainConfig : public UPrimaryDataAsset	
	{
	public:
		UClass TrainManagerClass; // 0x30(0x8)
		TArray Cars; // 0x38(0x10)
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
		unsigned char UnknownData05_3[0x10]; // 0x108(0x10) UNKNOWN PROPERTY
		bool bProceduralCarOrder; // 0x118(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		UDataTable CarTable; // 0x120(0x8)
		TArray CarOrder; // 0x128(0x10)
		float DefaultConnectorLength; // 0x138(0x4)
		float BaseMoveSpeed; // 0x13C(0x4)
		FScalableFloat TruckLocationTolerance; // 0x140(0x28)
		FScalableFloat MaxIterations; // 0x168(0x28)
		FScalableFloat MaxErrorOffset; // 0x190(0x28)
		FScalableFloat ErrorCatchupSpeedModifier; // 0x1B8(0x28)
		AFortTrainRail Rail; // 0x1E0(0x8)
		TArray Cars; // 0x1E8(0x10)
		unsigned char UnknownData07_6[0x10]; // 0x1F8(0x10) UNKNOWN PROPERTY
		FTrainMovementData ReplicatedMovementData; // 0x208(0x10)
		unsigned char UnknownData08_6[0x20]; // 0x218(0x20) UNKNOWN PROPERTY
		UAudioShapeLineListComponent CachedAudioShapeLineList; // 0x238(0x8)
		unsigned char UnknownData09_7[0x18]; // 0x240(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainManager");
			return ret;
		}

		void PlaceOnRails(); // Flags: Final|Native|Protected 0x7FF414D51178
		void OnRep_ReplicatedMovementData(); // Flags: Final|Native|Protected 0x7FF414D51098
		void OnRep_Rail(); // Flags: Final|Native|Protected 0x7FF414D50FB8
		void MoveToTimeAlongRail(float Time, bool bUpdateReplicatedMovementData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D50ED8
		void MoveToPositionOnRailAtCurrentServerTime(bool bUpdateReplicatedMovementData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D50DF8
		void MoveToPositionOnRail(float RailDistance, bool bUpdateReplicatedMovementData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D50D18
		void MoveAlongRail(float DeltaDistance, bool bUpdateReplicatedMovementData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D50C38
		FVector GetWorldLocationAtServerTime(float ServerTime); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D50B58
	};


	// Class TrainRuntime.FortTrainStationComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x2D0 - 0x220)
	class UFortTrainStationComponent : public USceneComponent	
	{
	public:
		FGameplayTag IdentifierTag; // 0x220(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x224(0x4) UNKNOWN PROPERTY
		FScalableFloat EnterLength; // 0x228(0x28)
		FScalableFloat CoastLength; // 0x250(0x28)
		FScalableFloat ExitLength; // 0x278(0x28)
		FScalableFloat SpeedMultiplier; // 0x2A0(0x28)
		unsigned char UnknownData03_7[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY

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
		TWeakObjectPtr LandscapeSplineActor; // 0x290(0x20)
		bool bMinimizeSplineComponent; // 0x2B0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2B1(0x3) UNKNOWN PROPERTY
		float MaxTangentDifference; // 0x2B4(0x4)
		USplineComponent SplineComponent; // 0x2B8(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x2C0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainRail");
			return ret;
		}

		void ValidateSpline(); // Flags: Final|Native|Private|Const 0x7FF414D51418
		float GetTimeFromNextTrainArrival(FGameplayTag& StationIdentifierTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D51338
		void GenerateSpline(); // Flags: Final|Native|Private|Const 0x7FF414D51258
	};


	// Class TrainRuntime.FortTrainMovingPlatformComponent
	// Inherited from UFortMovingPlatformComponent -> UFortBaseMovingPlatformComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x218 - 0x1E0)
	class UFortTrainMovingPlatformComponent : public UFortMovingPlatformComponent	
	{
	public:
		UCurveVector PickupPushCurve; // 0x1E0(0x8)
		FScalableFloat PickupTeleportDistance; // 0x1E8(0x28)
		unsigned char UnknownData01_7[0x8]; // 0x210(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TrainRuntime.FortTrainMovingPlatformComponent");
			return ret;
		}

		UFortTrainManager FindOrGetTrainManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D514F8
	};

}
