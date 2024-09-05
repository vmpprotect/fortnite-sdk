#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MilkshakeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MilkshakeRuntime.MilkshakeControllerComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x2C0 (0x368 - 0xA8)
	class UMilkshakeControllerComponent : public UFortControllerComponent	
	{
	public:
		FScalableFloat NearbyBuildingActorsUpdateScanRadius; // 0xA8(0x28)
		int32_t NearbyBuildingActorsUpdateScanRadiusReplicated; // 0xD0(0x4)
		unsigned char UnknownData14_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FScalableFloat CameraShakeScale; // 0xD8(0x28)
		float CameraShakeScaleReplicated; // 0x100(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FScalableFloat NearbyBuildingActorsUpdateInterval; // 0x108(0x28)
		float NearbyBuildingActorsUpdateIntervalReplicated; // 0x130(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		FScalableFloat bForceFeedbackEnabled; // 0x138(0x28)
		bool bForceFeedbackEnabledReplicated; // 0x160(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x161(0x3) UNKNOWN PROPERTY
		FName ForceFeedbackTag; // 0x164(0x4)
		UCurveFloat PawnInAirBasedCameraShakeMultiplierLookUpCurve; // 0x168(0x8)
		float PawnInAirBasedCameraShakeMultiplierInterpSpeed; // 0x170(0x4)
		unsigned char UnknownData18_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		UClass CameraShakeClass; // 0x178(0x8)
		FROscillator CameraShakeRotOscillationBaseValues; // 0x180(0x24)
		float CameraShakeRotOscillationPitchFrequencyMin; // 0x1A4(0x4)
		float CameraShakeRotOscillationPitchFrequencyMax; // 0x1A8(0x4)
		float CameraShakeRotOscillationRollFrequencyMin; // 0x1AC(0x4)
		float CameraShakeRotOscillationRollFrequencyMax; // 0x1B0(0x4)
		unsigned char UnknownData19_6[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY
		USoundBase CameraShakeSoundCue; // 0x1B8(0x8)
		float CameraShakeAudioFadeOutDuration; // 0x1C0(0x4)
		EAudioFaderCurve CameraShakeAudioFadeCurveType; // 0x1C4(0x1)
		unsigned char UnknownData20_6[0x3]; // 0x1C5(0x3) UNKNOWN PROPERTY
		FName CameraShakeAudioParam; // 0x1C8(0x4)
		unsigned char UnknownData21_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FScalableFloat MinTimeBetweenBuildingDamageFX; // 0x1D0(0x28)
		float MinTimeBetweenBuildingDamageFXReplicated; // 0x1F8(0x4)
		unsigned char UnknownData22_6[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxTimeBetweenBuildingDamageFX; // 0x200(0x28)
		float MaxTimeBetweenBuildingDamageFXReplicated; // 0x228(0x4)
		unsigned char UnknownData23_6[0x4]; // 0x22C(0x4) UNKNOWN PROPERTY
		UFXSystemAsset BuildingDamageFXTemplate; // 0x230(0x8)
		float BuildingDamageFXCooldown; // 0x238(0x4)
		FName BuildingDamageFXMagnitudeParamName; // 0x23C(0x4)
		TMap RecentDamageFXBuildings; // 0x240(0x50)
		TMap BuildingDamageSoundCueByResourceType; // 0x290(0x50)
		float PlayForceFeedbackInterval; // 0x2E0(0x4)
		unsigned char UnknownData24_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		TArray ForceFeedbackEffects; // 0x2E8(0x10)
		unsigned char UnknownData25_6[0x10]; // 0x2F8(0x10) UNKNOWN PROPERTY
		TArray RegisteredEarthquakes; // 0x308(0x10)
		AMilkshakeEarthquakeActor CurrentEarthquake; // 0x318(0x8)
		unsigned char UnknownData26_6[0x18]; // 0x320(0x18) UNKNOWN PROPERTY
		UAudioComponent CurrentCameraShakeAudioComponent; // 0x338(0x8)
		TArray NearbyBuildingActors; // 0x340(0x10)
		unsigned char UnknownData27_7[0x18]; // 0x350(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MilkshakeRuntime.MilkshakeControllerComponent");
			return ret;
		}

		void UpdateNearbyBuildingActors(); // Flags: Final|Native|Private 0x7FF414BB13B8
		void UnregisterEarthquake(AMilkshakeEarthquakeActor Earthquake); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB12D8
		void SpawnBuildingDamageFX(); // Flags: Final|Native|Private 0x7FF414BB11F8
		void RegisterEarthquake(AMilkshakeEarthquakeActor Earthquake); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB1118
		void PlayForceFeedback(); // Flags: Final|Native|Private 0x7FF414BB1038
	};


	// Class MilkshakeRuntime.MilkshakeEarthquakeActor
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class AMilkshakeEarthquakeActor : public AActor	
	{
	public:
		int32_t AsyncOverlappedActorsPreallocateCount; // 0x290(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		TArray AsyncOverlappedActors; // 0x298(0x10)
		TArray OverlappedPhysicsActorInfos; // 0x2A8(0x10)
		FScalableFloat MaxNumOfPhysicActorSimulation; // 0x2B8(0x28)
		float MinTimeBeforeNextForceDirectionUpdate; // 0x2E0(0x4)
		float MaxTimeBeforeNextForceDirectionUpdate; // 0x2E4(0x4)
		float MinPhysicsImpulseMagnitude; // 0x2E8(0x4)
		float MaxPhysicsImpulseMagnitude; // 0x2EC(0x4)
		TMap SimSizeToImpulseScalarMap; // 0x2F0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MilkshakeRuntime.MilkshakeEarthquakeActor");
			return ret;
		}

		void TickEarthquakePhysicsActorForces(float DeltaSeconds); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414BB18F8
		void RemoveNullsFromAsyncOverlappedActors(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414BB1818
		void RemoveAsyncOverlappedActorsOutsideRadius(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414BB1738
		void OnActorRemovedFromAsyncOverlappedActors(AActor RemovedActor); // Flags: Event|Protected|BlueprintEvent 0x7FF414BB1658
		float GetRadius(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BB1578
		float GetNormalizedMagnitudeAtLocation(FVector Location); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x7FF414BB1498
	};


	// Class MilkshakeRuntime.MilkshakeFieldSystemActor
	// Inherited from AFieldSystemActor -> AActor -> UObject
	// Size: 0x30 (0x2C8 - 0x298)
	class AMilkshakeFieldSystemActor : public AFieldSystemActor	
	{
	public:
		UOperatorField OperatorFieldMultiplyComponent; // 0x298(0x8)
		URadialFalloff RadialFallOffComponent; // 0x2A0(0x8)
		URadialVector RadialVectorComponent; // 0x2A8(0x8)
		float Radius; // 0x2B0(0x4)
		float StopGameTime; // 0x2B4(0x4)
		float IncomingDuration; // 0x2B8(0x4)
		float OutgoingDuration; // 0x2BC(0x4)
		float Strength; // 0x2C0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MilkshakeRuntime.MilkshakeFieldSystemActor");
			return ret;
		}

		void SetStrength(float InStrength); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BB19D8
	};

}
