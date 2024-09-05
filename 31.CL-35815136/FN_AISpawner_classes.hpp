#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AISpawner
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AISpawner.FortGameFeatureAction_AddSpawnerDeviceBindingTrack
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UFortGameFeatureAction_AddSpawnerDeviceBindingTrack : public UGameFeatureAction	
	{
	public:
		FSoftClassPath SpawnerDeviceClassPath; // 0x28(0x18)
		FSoftClassPath BindingTrackClassPath; // 0x40(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AISpawner.FortGameFeatureAction_AddSpawnerDeviceBindingTrack");
			return ret;
		}
	};


	// Class AISpawner.AISpawnerPreviewerComponent
	// Inherited from UChildActorComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x280 - 0x270)
	class UAISpawnerPreviewerComponent : public UChildActorComponent	
	{
	public:
		UClass* PlayerMannequinClass; // 0x270(0x8)
		UClass* DefaultCustomAnimationBPClass; // 0x278(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AISpawner.AISpawnerPreviewerComponent");
			return ret;
		}

		void SetCIDForPreview(UAthenaCharacterItemDefinition* InCID); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E9000(relative to base address)
		void SetActorForPreview(UClass* InActorClass); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E8E70(relative to base address)
		void ClearCIDPreview(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E8E5C(relative to base address)
		void ClearActorPreview(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E8E5C(relative to base address)
	};


	// Class AISpawner.FortAthenaMutator_AISpawner
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x490 - 0x488)
	class AFortAthenaMutator_AISpawner : public AFortAthenaMutator_GameModeBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x488(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AISpawner.FortAthenaMutator_AISpawner");
			return ret;
		}
	};

}
