#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PlayerAIPetRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PlayerAIPetRuntime.PlayerAIPetCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlayerAIPetCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAIPetRuntime.PlayerAIPetCheatManager");
			return ret;
		}

		void SpawnPlayerPetForAllPlayers(FString PetToSpawn); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void SpawnPlayerPet(FString PetToSpawn); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void DetachPlayerPet(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DespawnPlayerPet(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void CustomPlayerPetCheat(FString Command, FString Param1, FString Param2, FString Param3); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF751498B34(relative to base address)
		void AttachPlayerPet(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class PlayerAIPetRuntime.FortAIPawnComponent_PlayerAIPet
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortAIPawnComponent_PlayerAIPet : public UFortPawnComponent	
	{
	public:
		AFortPlayerPawn* CurrentPlayer; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAIPetRuntime.FortAIPawnComponent_PlayerAIPet");
			return ret;
		}

		void SetCurrentPlayer(AFortPlayerPawn* NewPlayer); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnPetSpawned(AFortPlayerPawn* Player); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C75FA60(relative to base address)
	};


	// Class PlayerAIPetRuntime.FortControllerComponent_PlayerAIPet
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortControllerComponent_PlayerAIPet : public UFortControllerComponent	
	{
	public:
		AFortAIPawn* CurrentPet; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAIPetRuntime.FortControllerComponent_PlayerAIPet");
			return ret;
		}

		void SpawnPet(FString PetToSpawn); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void SetCurrentPet(AFortAIPawn* NewPet); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		bool DetachPet(); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF751498D08(relative to base address)
		bool DespawnPet(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748CDD424(relative to base address)
		void CustomCheat(FString Command, FString Param1, FString Param2, FString Param3); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool AttachPet(); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF751498B0C(relative to base address)
	};


	// Class PlayerAIPetRuntime.FortGameStateComponent_PlayerAIPet
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFortGameStateComponent_PlayerAIPet : public UFortGameStateComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAIPetRuntime.FortGameStateComponent_PlayerAIPet");
			return ret;
		}
	};

}
