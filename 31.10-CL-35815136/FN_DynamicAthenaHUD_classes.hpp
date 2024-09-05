#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DynamicAthenaHUD
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DynamicAthenaHUD.DynamicAthenaHUDDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x48 (0x2F8 - 0x2B0)
	class ADynamicAthenaHUDDirector : public ADynamicUIDirectorBase	
	{
	public:
		UDynamicUIScene* VehicleHUDScene; // 0x2B0(0x8)
		UDynamicUIScene* CreativeQuickbarScene; // 0x2B8(0x8)
		UDynamicUIScene* PlayerMessagesScene; // 0x2C0(0x8)
		UDynamicUIScene* TournamentScene; // 0x2C8(0x8)
		UDynamicUIScene* ArenaTournamentScene; // 0x2D0(0x8)
		UDynamicUIScene* BuildWatermarkScene; // 0x2D8(0x8)
		UDynamicUIScene* LoadingMessageScene; // 0x2E0(0x8)
		TArray<UDynamicUIScene*> AddedScenes; // 0x2E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicAthenaHUD.DynamicAthenaHUDDirector");
			return ret;
		}

		void HandleNpcHired(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751339190(relative to base address)
		void HandleInGameLoadScreenChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText); // Flags: Final|Native|Private, Memory Exec: 0x7FF75133906C(relative to base address)
		void HandleExitVehicle(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751339058(relative to base address)
		void HandleEnterVehicle(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751339044(relative to base address)
		void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped); // Flags: Final|Native|Private, Memory Exec: 0x7FF751338FC4(relative to base address)
	};

}
