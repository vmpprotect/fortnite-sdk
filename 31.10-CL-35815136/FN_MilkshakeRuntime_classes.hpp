#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MilkshakeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FScalableFloat CameraShakeScale; // 0xD8(0x28)
		float CameraShakeScaleReplicated; // 0x100(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FScalableFloat NearbyBuildingActorsUpdateInterval; // 0x108(0x28)
		float NearbyBuildingActorsUpdateIntervalReplicated; // 0x130(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		FScalableFloat bForceFeedbackEnabled; // 0x138(0x28)
		bool bForceFeedbackEnabledReplicated; // 0x160(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x161(0x3) UNKNOWN PROPERTY
		FName ForceFeedbackTag; // 0x164(0x4)
		UCurveFloat* PawnInAirBasedCameraShakeMultiplierLookUpCurve; // 0x168(0x8)
		float PawnInAirBasedCameraShakeMultiplierInterpSpeed; // 0x170(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		UClass* CameraShakeClass; // 0x178(0x8)
		FROscillator CameraShakeRotOscillationBaseValues; // 0x180(0x24)
		float CameraShakeRotOscillationPitchFrequencyMin; // 0x1A4(0x4)
		float CameraShakeRotOscillationPitchFrequencyMax; // 0x1A8(0x4)
		float CameraShakeRotOscillationRollFrequencyMin; // 0x1AC(0x4)
		float CameraShakeRotOscillationRollFrequencyMax; // 0x1B0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY
		USoundBase* CameraShakeSoundCue; // 0x1B8(0x8)
		float CameraShakeAudioFadeOutDuration; // 0x1C0(0x4)
		EAudioFaderCurve CameraShakeAudioFadeCurveType; // 0x1C4(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x1C5(0x3) UNKNOWN PROPERTY
		FName CameraShakeAudioParam; // 0x1C8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FScalableFloat MinTimeBetweenBuildingDamageFX; // 0x1D0(0x28)
		float MinTimeBetweenBuildingDamageFXReplicated; // 0x1F8(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxTimeBetweenBuildingDamageFX; // 0x200(0x28)
		float MaxTimeBetweenBuildingDamageFXReplicated; // 0x228(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x22C(0x4) UNKNOWN PROPERTY
		UFXSystemAsset* BuildingDamageFXTemplate; // 0x230(0x8)
		float BuildingDamageFXCooldown; // 0x238(0x4)
		FName BuildingDamageFXMagnitudeParamName; // 0x23C(0x4)
		TMap<ABuildingActor*, float> RecentDamageFXBuildings; // 0x240(0x50)
		TMap<TEnumAsByte, USoundBase*> BuildingDamageSoundCueByResourceType; // 0x290(0x50)
		float PlayForceFeedbackInterval; // 0x2E0(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		TArray<UForceFeedbackEffect*> ForceFeedbackEffects; // 0x2E8(0x10)
		unsigned char UnknownData11_6[0x10]; // 0x2F8(0x10) UNKNOWN PROPERTY
		TArray<AMilkshakeEarthquakeActor*> RegisteredEarthquakes; // 0x308(0x10)
		AMilkshakeEarthquakeActor* CurrentEarthquake; // 0x318(0x8)
		unsigned char UnknownData12_6[0x18]; // 0x320(0x18) UNKNOWN PROPERTY
		UAudioComponent* CurrentCameraShakeAudioComponent; // 0x338(0x8)
		TArray<ABuildingActor*> NearbyBuildingActors; // 0x340(0x10)
		unsigned char UnknownData13_7[0x18]; // 0x350(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MilkshakeRuntime.MilkshakeControllerComponent");
			return ret;
		}

		void UpdateNearbyBuildingActors(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505A8D64(relative to base address)
		void UnregisterEarthquake(AMilkshakeEarthquakeActor* Earthquake); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A8CE4(relative to base address)
		void SpawnBuildingDamageFX(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505A8C54(relative to base address)
		void RegisterEarthquake(AMilkshakeEarthquakeActor* Earthquake); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A8B54(relative to base address)
		void PlayForceFeedback(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505A8B40(relative to base address)
	};


	// Class MilkshakeRuntime.MilkshakeEarthquakeActor
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class AMilkshakeEarthquakeActor : public AActor	
	{
	public:
		int32_t AsyncOverlappedActorsPreallocateCount; // 0x290(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		TArray<AActor*> AsyncOverlappedActors; // 0x298(0x10)
		TArray<FMilkshakeEarthquakePhysicsActorInfo> OverlappedPhysicsActorInfos; // 0x2A8(0x10)
		FScalableFloat MaxNumOfPhysicActorSimulation; // 0x2B8(0x28)
		float MinTimeBeforeNextForceDirectionUpdate; // 0x2E0(0x4)
		float MaxTimeBeforeNextForceDirectionUpdate; // 0x2E4(0x4)
		float MinPhysicsImpulseMagnitude; // 0x2E8(0x4)
		float MaxPhysicsImpulseMagnitude; // 0x2EC(0x4)
		TMap<EFortPhysicsSimSize, float> SimSizeToImpulseScalarMap; // 0x2F0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MilkshakeRuntime.MilkshakeEarthquakeActor");
			return ret;
		}

		void TickEarthquakePhysicsActorForces(float DeltaSeconds); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7505A8C68(relative to base address)
		void RemoveNullsFromAsyncOverlappedActors(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void RemoveAsyncOverlappedActorsOutsideRadius(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnActorRemovedFromAsyncOverlappedActors(AActor* RemovedActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetRadius(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetNormalizedMagnitudeAtLocation(FVector Location); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MilkshakeRuntime.MilkshakeFieldSystemActor
	// Inherited from AFieldSystemActor -> AActor -> UObject
	// Size: 0x30 (0x2C8 - 0x298)
	class AMilkshakeFieldSystemActor : public AFieldSystemActor	
	{
	public:
		UOperatorField* OperatorFieldMultiplyComponent; // 0x298(0x8)
		URadialFalloff* RadialFallOffComponent; // 0x2A0(0x8)
		URadialVector* RadialVectorComponent; // 0x2A8(0x8)
		float Radius; // 0x2B0(0x4)
		float StopGameTime; // 0x2B4(0x4)
		float IncomingDuration; // 0x2B8(0x4)
		float OutgoingDuration; // 0x2BC(0x4)
		float Strength; // 0x2C0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MilkshakeRuntime.MilkshakeFieldSystemActor");
			return ret;
		}

		void SetStrength(float InStrength); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A8BD4(relative to base address)
	};

}
