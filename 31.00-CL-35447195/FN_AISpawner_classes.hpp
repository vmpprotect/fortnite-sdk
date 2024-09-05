#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AISpawner
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		UClass PlayerMannequinClass; // 0x270(0x8)
		UClass DefaultCustomAnimationBPClass; // 0x278(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AISpawner.AISpawnerPreviewerComponent");
			return ret;
		}

		void SetCIDForPreview(UAthenaCharacterItemDefinition InCID); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D620B8
		void SetActorForPreview(UClass InActorClass); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D61FD8
		void ClearCIDPreview(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D61EF8
		void ClearActorPreview(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D61E18
	};


	// Class AISpawner.FortAthenaMutator_AISpawner
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x490 - 0x488)
	class AFortAthenaMutator_AISpawner : public AFortAthenaMutator_GameModeBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x488(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AISpawner.FortAthenaMutator_AISpawner");
			return ret;
		}
	};

}
