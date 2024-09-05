#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ValetUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x8 (0x138 - 0x130)
	class UFortMobileActionButtonBehavior_ValetBoost : public UFortMobileActionButtonBehavior	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x130(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetUI.FortMobileActionButtonBehavior_ValetBoost");
			return ret;
		}
	};


	// Class ValetUI.FortVehicleInteractionWidgetHolder
	// Inherited from UFortInteractContextInfoWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x180 (0x430 - 0x2B0)
	class UFortVehicleInteractionWidgetHolder : public UFortInteractContextInfoWidget	
	{
	public:
		unsigned char UnknownData00_3[0x178]; // 0x2B0(0x178) UNKNOWN PROPERTY
		UVerticalBox* VerticalBox_WidgetHolder; // 0x428(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetUI.FortVehicleInteractionWidgetHolder");
			return ret;
		}

		void HandleContextInfoUpdated(UFortInteractContextInfo* ContextInfo); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7505D9310(relative to base address)
	};

}
