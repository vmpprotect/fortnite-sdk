#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioClustersRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioClustersRuntime.AudioClusterConfig
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAudioClusterConfig : public UObject	
	{
	public:
		UAudioClusterBehavior Behavior; // 0x28(0x8)

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
		TMap TagConfigMap; // 0x28(0x50)

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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioClustersRuntime.AudioClusterBehavior");
			return ret;
		}

		void OnStop(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414CFAC98
		void OnStart(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414CFABB8
		void OnSizeUpdated(int32_t Size); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414CFAAD8
		void OnPositionUpdated(FVector& Position); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414CFA9F8
		void OnActorRemoved(AActor Actor); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414CFA918
		void OnActorAdded(AActor Actor); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414CFA838
	};


	// Class AudioClustersRuntime.AudioClustersSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAudioClustersSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioClustersRuntime.AudioClustersSubsystem");
			return ret;
		}

		void UpdateClusters(float DeltaTimeSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFB398
		bool Unregister(FAudioClusterActorInfo& ActorInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFB2B8
		bool SetParam(FGameplayTag& tag, double Value); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFB1D8
		void SetListenerPosition(FVector& InListenerPosition); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CFB0F8
		bool RemoveConfigMap(UAudioClusterConfigMap Map); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFB018
		bool RegisterOneShot(FAudioClusterOneShotInfo& OneShotInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFAF38
		bool Register(FAudioClusterActorInfo& ActorInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFAE58
		bool AddConfigMap(UAudioClusterConfigMap Map); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFAD78
	};

}
