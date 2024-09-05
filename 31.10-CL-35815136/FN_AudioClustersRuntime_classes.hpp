#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioClustersRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioClustersRuntime.AudioClusterConfig
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAudioClusterConfig : public UObject	
	{
	public:
		UAudioClusterBehavior* Behavior; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioClustersRuntime.AudioClusterConfig");
			return ret;
		}
	};


	// Class AudioClustersRuntime.AudioClusterConfigMap
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAudioClusterConfigMap : public UObject	
	{
	public:
		TMap<FGameplayTag, UAudioClusterConfig*> TagConfigMap; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioClustersRuntime.AudioClusterConfigMap");
			return ret;
		}
	};


	// Class AudioClustersRuntime.AudioClusterBehavior
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAudioClusterBehavior : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioClustersRuntime.AudioClusterBehavior");
			return ret;
		}

		void OnStop(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74C349660(relative to base address)
		void OnStart(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF746F37328(relative to base address)
		void OnSizeUpdated(int32_t Size); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF751384084(relative to base address)
		void OnPositionUpdated(FVector& Position); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF751383FBC(relative to base address)
		void OnActorRemoved(AActor* Actor); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D04D084(relative to base address)
		void OnActorAdded(AActor* Actor); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D87CD00(relative to base address)
	};


	// Class AudioClustersRuntime.AudioClustersSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAudioClustersSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioClustersRuntime.AudioClustersSubsystem");
			return ret;
		}

		void UpdateClusters(float DeltaTimeSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751384638(relative to base address)
		bool Unregister(FAudioClusterActorInfo& ActorInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75138459C(relative to base address)
		bool SetParam(FGameplayTag& Tag, double Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751384478(relative to base address)
		void SetListenerPosition(FVector& InListenerPosition); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513843B4(relative to base address)
		bool RemoveConfigMap(UAudioClusterConfigMap* Map); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75138425C(relative to base address)
		bool RegisterOneShot(FAudioClusterOneShotInfo& OneShotInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513841A4(relative to base address)
		bool Register(FAudioClusterActorInfo& ActorInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751384108(relative to base address)
		bool AddConfigMap(UAudioClusterConfigMap* Map); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751383F2C(relative to base address)
	};

}
