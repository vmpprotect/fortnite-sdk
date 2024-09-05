#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SuperstormRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SuperstormRuntime.TempestLightningComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x378 (0x418 - 0xA0)
	class UTempestLightningComponent : public UGameFrameworkComponent	
	{
	public:
		UClass LightningBoltClass; // 0xA0(0x8)
		TArray LightningBoltTargetEffectContainers; // 0xA8(0x10)
		UTargetingPreset LightningBoltTargetingPreset; // 0xB8(0x8)
		UEnvQuery FindTargetablePawnsQuery; // 0xC0(0x8)
		UEnvQuery FindTargetableLocationQuery; // 0xC8(0x8)
		FName EnvironmentQueryParamName_LightningRadius; // 0xD0(0x4)
		FName EnvironmentQueryParamName_MinLightningTargetDistance; // 0xD4(0x4)
		FScalableFloat LightningCloudHeight; // 0xD8(0x28)
		FScalableFloat LightningRadius; // 0x100(0x28)
		FScalableFloat MinLightningTargetDistance; // 0x128(0x28)
		FScalableFloat LightningFrequencyMin; // 0x150(0x28)
		FScalableFloat LightningFrequencyMax; // 0x178(0x28)
		FScalableFloat LightningBoltsMin; // 0x1A0(0x28)
		FScalableFloat LightningBoltsMax; // 0x1C8(0x28)
		FScalableFloat LightningBoltIntervalMin; // 0x1F0(0x28)
		FScalableFloat LightningBoltIntervalMax; // 0x218(0x28)
		FScalableFloat LightningBoltSeparationDistance; // 0x240(0x28)
		FScalableFloat LightningStruckPawnReselectionInterval; // 0x268(0x28)
		FScalableFloat LightningBoltTelegraphDuration; // 0x290(0x28)
		FScalableFloat LightningBoltImpactIgnitionRadius; // 0x2B8(0x28)
		FScalableFloat LightningBoltGrassIgnitionRadius; // 0x2E0(0x28)
		FScalableFloat LightningBoltGrassFirePropagationFuel; // 0x308(0x28)
		FGameplayTag LightningAreaTargetTelegraphCue; // 0x330(0x4)
		FGameplayTag LightningBoltTargetTelegraphCue; // 0x334(0x4)
		TArray LightningBoltData; // 0x338(0x10)
		unsigned char UnknownData01_7[0xD0]; // 0x348(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SuperstormRuntime.TempestLightningComponent");
			return ret;
		}

		float GetLightningRadius(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4ED98
		float GetCloudHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4ECB8
	};


	// Class SuperstormRuntime.TempestTornadoForcesComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x490 (0x530 - 0xA0)
	class UTempestTornadoForcesComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate OnActorAddedToTornadoForces; // 0xA0(0x10)
		FMulticastInlineDelegate OnActorRemovedFromTornadoForces; // 0xB0(0x10)
		FDataTableRowHandle ConfigHandle; // 0xC0(0x10)
		TArray PhysicsPresetTagsAngularDampingToOverride; // 0xD0(0x10)
		FScalableFloat AngularDampingOverride; // 0xE0(0x28)
		UClass PawnInGE; // 0x108(0x8)
		TMap ObjectTypeToMaxCapCount; // 0x110(0x50)
		FGameplayTagContainer TagsToIgnore; // 0x160(0x20)
		UClass RecentlyRemovedGE; // 0x180(0x8)
		UTargetingPreset TargetingPreset; // 0x188(0x8)
		FGameplayTag DamageSetByCallerTag; // 0x190(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		UClass PeriodicDamageGE; // 0x198(0x8)
		UClass BurstDamageGE; // 0x1A0(0x8)
		FGameplayTag TornadoActiveCue; // 0x1A8(0x4)
		FGameplayTag PlayerNearCue; // 0x1AC(0x4)
		FGameplayTag PawnInCue; // 0x1B0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY
		FScalableFloat PlayerNearRange; // 0x1B8(0x28)
		FGameplayTagContainer BlockAbilitiesWithTag; // 0x1E0(0x20)
		FTornadoClientSimulationArray ActorsToClientSimulate; // 0x200(0x118)
		unsigned char UnknownData07_6[0x118]; // 0x318(0x118) UNKNOWN PROPERTY
		FTargetingRequestHandle AsyncTargetingHandle; // 0x430(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x434(0x4) UNKNOWN PROPERTY
		TSet PreviouslyNearPlayers; // 0x438(0x50)
		unsigned char UnknownData09_7[0xA8]; // 0x488(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SuperstormRuntime.TempestTornadoForcesComponent");
			return ret;
		}

		void OnVehicleInTornadoPlayerExit(AFortPlayerControllerAthena PlayerController, AFortAthenaVehicle Vehicle); // Flags: Final|Native|Private 0x7FF414D4EF58
		bool IsActorInTornado(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4EE78
	};


	// Class SuperstormRuntime.TornadoRadialForce
	// Inherited from AFieldSystemActor -> AActor -> UObject
	// Size: 0x38 (0x2D0 - 0x298)
	class ATornadoRadialForce : public AFieldSystemActor	
	{
	public:
		float Radius; // 0x298(0x4)
		float Strength; // 0x29C(0x4)
		float StartTime; // 0x2A0(0x4)
		float StopTime; // 0x2A4(0x4)
		float IncomingDuration; // 0x2A8(0x4)
		float OutgoingDuration; // 0x2AC(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		URadialVector RadialVector; // 0x2B8(0x8)
		URadialFalloff RadialFalloff; // 0x2C0(0x8)
		UOperatorField OperatorField; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SuperstormRuntime.TornadoRadialForce");
			return ret;
		}
	};

}
