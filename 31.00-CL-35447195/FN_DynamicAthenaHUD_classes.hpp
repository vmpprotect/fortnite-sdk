#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DynamicAthenaHUD
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DynamicAthenaHUD.DynamicAthenaHUDDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x48 (0x2F8 - 0x2B0)
	class ADynamicAthenaHUDDirector : public ADynamicUIDirectorBase	
	{
	public:
		UDynamicUIScene VehicleHUDScene; // 0x2B0(0x8)
		UDynamicUIScene CreativeQuickbarScene; // 0x2B8(0x8)
		UDynamicUIScene PlayerMessagesScene; // 0x2C0(0x8)
		UDynamicUIScene TournamentScene; // 0x2C8(0x8)
		UDynamicUIScene ArenaTournamentScene; // 0x2D0(0x8)
		UDynamicUIScene BuildWatermarkScene; // 0x2D8(0x8)
		UDynamicUIScene LoadingMessageScene; // 0x2E0(0x8)
		TArray AddedScenes; // 0x2E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicAthenaHUD.DynamicAthenaHUDDirector");
			return ret;
		}

		void HandleNpcHired(); // Flags: Final|Native|Private 0x7FF414CF01F8
		void HandleInGameLoadScreenChanged(AFortPlayerControllerAthena PlayerController, bool bEnableLoadScreen, FText HUDReasonText); // Flags: Final|Native|Private 0x7FF414CF0118
		void HandleExitVehicle(); // Flags: Final|Native|Private 0x7FF414CF0038
		void HandleEnterVehicle(); // Flags: Final|Native|Private 0x7FF414CEFF58
		void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped); // Flags: Final|Native|Private 0x7FF414CEFE78
	};

}
