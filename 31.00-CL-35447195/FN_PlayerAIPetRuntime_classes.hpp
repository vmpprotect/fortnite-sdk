#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PlayerAIPetRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void SpawnPlayerPetForAllPlayers(FString PetToSpawn); // Flags: Final|Exec|Native|Public 0x7FF414D12BD8
		void SpawnPlayerPet(FString PetToSpawn); // Flags: Final|Exec|Native|Public 0x7FF414D12AF8
		void DetachPlayerPet(); // Flags: Final|Exec|Native|Public 0x7FF414D12A18
		void DespawnPlayerPet(); // Flags: Final|Exec|Native|Public 0x7FF414D12938
		void CustomPlayerPetCheat(FString Command, FString Param1, FString Param2, FString Param3); // Flags: Final|Exec|Native|Public 0x7FF414D12858
		void AttachPlayerPet(); // Flags: Final|Exec|Native|Public 0x7FF414D12778
	};


	// Class PlayerAIPetRuntime.FortAIPawnComponent_PlayerAIPet
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortAIPawnComponent_PlayerAIPet : public UFortPawnComponent	
	{
	public:
		AFortPlayerPawn CurrentPlayer; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAIPetRuntime.FortAIPawnComponent_PlayerAIPet");
			return ret;
		}

		void SetCurrentPlayer(AFortPlayerPawn NewPlayer); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414D12D98
		void OnPetSpawned(AFortPlayerPawn Player); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF414D12CB8
	};


	// Class PlayerAIPetRuntime.FortControllerComponent_PlayerAIPet
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortControllerComponent_PlayerAIPet : public UFortControllerComponent	
	{
	public:
		AFortAIPawn CurrentPet; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAIPetRuntime.FortControllerComponent_PlayerAIPet");
			return ret;
		}

		void SpawnPet(FString PetToSpawn); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D132D8
		void SetCurrentPet(AFortAIPawn NewPet); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414D131F8
		bool DetachPet(); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF414D13118
		bool DespawnPet(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D13038
		void CustomCheat(FString Command, FString Param1, FString Param2, FString Param3); // Flags: Event|Public|BlueprintEvent 0x7FF414D12F58
		bool AttachPet(); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF414D12E78
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
