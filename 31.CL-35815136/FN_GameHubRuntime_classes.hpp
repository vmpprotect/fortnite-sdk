#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameHubRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameHubRuntime.GameHubBaseMutator
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x348 - 0x338)
	class AGameHubBaseMutator : public AFortAthenaMutator	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x338(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameHubRuntime.GameHubBaseMutator");
			return ret;
		}
	};


	// Class GameHubRuntime.GameHubPlayerSpawningComponent
	// Inherited from UPlayspaceComponent_PlayerSpawning -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xD0 - 0xB0)
	class UGameHubPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning	
	{
	public:
		FGameplayTagContainer PlayerStartRequirements; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameHubRuntime.GameHubPlayerSpawningComponent");
			return ret;
		}
	};


	// Class GameHubRuntime.GameHubPlayspace
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x28 (0x6C8 - 0x6A0)
	class AGameHubPlayspace : public AFortPlayspace	
	{
	public:
		bool bSimulatePlayerDamage; // 0x6A0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x6A1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer PlayerStartRequirements; // 0x6A8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameHubRuntime.GameHubPlayspace");
			return ret;
		}
	};

}
