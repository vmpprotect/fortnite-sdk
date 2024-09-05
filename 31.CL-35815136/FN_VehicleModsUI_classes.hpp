#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VehicleModsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VehicleModsUI.AthenaMarkerDetailsExtensionVehicleMods
	// Inherited from UAthenaMarkerDetailsExtension -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UAthenaMarkerDetailsExtensionVehicleMods : public UAthenaMarkerDetailsExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleModsUI.AthenaMarkerDetailsExtensionVehicleMods");
			return ret;
		}

		void SetModInfo(UFortVehicleModConfig* VehicleModConfig); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetModInfo(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VehicleModsUI.FortInteractionContextInfoWidgetVehicleMods
	// Inherited from UFortInteractContextInfoWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D0 - 0x2B0)
	class UFortInteractionContextInfoWidgetVehicleMods : public UFortInteractContextInfoWidget	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x2B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleModsUI.FortInteractionContextInfoWidgetVehicleMods");
			return ret;
		}

		void SetModInfo(UFortVehicleModConfig* VehicleModConfig); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetModInfo(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextInfoUpdated(UFortInteractContextInfo* ContextInfo); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751592AA8(relative to base address)
	};

}
