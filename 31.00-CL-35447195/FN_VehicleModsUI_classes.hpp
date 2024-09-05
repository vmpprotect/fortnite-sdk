#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehicleModsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VehicleModsUI.AthenaMarkerDetailsExtensionVehicleMods
	// Inherited from UAthenaMarkerDetailsExtension -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UAthenaMarkerDetailsExtensionVehicleMods : public UAthenaMarkerDetailsExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleModsUI.AthenaMarkerDetailsExtensionVehicleMods");
			return ret;
		}

		void SetModInfo(UFortVehicleModConfig VehicleModConfig); // Flags: Event|Protected|BlueprintEvent 0x7FF414D52758
		void ResetModInfo(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D52678
	};


	// Class VehicleModsUI.FortInteractionContextInfoWidgetVehicleMods
	// Inherited from UFortInteractContextInfoWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D8 - 0x2B8)
	class UFortInteractionContextInfoWidgetVehicleMods : public UFortInteractContextInfoWidget	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x2B8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleModsUI.FortInteractionContextInfoWidgetVehicleMods");
			return ret;
		}

		void SetModInfo(UFortVehicleModConfig VehicleModConfig); // Flags: Event|Protected|BlueprintEvent 0x7FF414D529F8
		void ResetModInfo(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D52918
		void HandleContextInfoUpdated(UFortInteractContextInfo ContextInfo); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D52838
	};

}
