#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortAudioClustersRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortAudioClustersRuntime.FortAudioClustersSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortAudioClustersSettings : public UDeveloperSettings	
	{
	public:
		TMap<FGameplayTag, double> ParameterDefaults; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortAudioClustersRuntime.FortAudioClustersSettings");
			return ret;
		}
	};


	// Class FortAudioClustersRuntime.FortAudioClustersSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFortAudioClustersSubsystem : public UTickableWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortAudioClustersRuntime.FortAudioClustersSubsystem");
			return ret;
		}
	};


	// Class FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UGameFeatureAction_AddAudioCluster : public UGameFeatureAction	
	{
	public:
		TArray<FGameFeatureAudioClusterEntry> Clusters; // 0x28(0x10)
		TMap<FName, FGameplayTag> OverrideTable; // 0x38(0x50)
		FName DisabledActorTag; // 0x88(0x4)
		unsigned char UnknownData00_7[0x64]; // 0x8C(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster");
			return ret;
		}

		void HandleRegisteredActorDeath(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF7491C077C(relative to base address)
	};


	// Class FortAudioClustersRuntime.GameFeatureAction_AddAudioClusterConfigMaps
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGameFeatureAction_AddAudioClusterConfigMaps : public UGameFeatureAction	
	{
	public:
		TArray<TWeakObjectPtr> ConfigMaps; // 0x28(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x38(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortAudioClustersRuntime.GameFeatureAction_AddAudioClusterConfigMaps");
			return ret;
		}
	};

}
