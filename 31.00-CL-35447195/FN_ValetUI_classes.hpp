#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ValetUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x8 (0x138 - 0x130)
	class UFortMobileActionButtonBehavior_ValetBoost : public UFortMobileActionButtonBehavior	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x130(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetUI.FortMobileActionButtonBehavior_ValetBoost");
			return ret;
		}
	};


	// Class ValetUI.FortVehicleInteractionWidgetHolder
	// Inherited from UFortInteractContextInfoWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x180 (0x438 - 0x2B8)
	class UFortVehicleInteractionWidgetHolder : public UFortInteractContextInfoWidget	
	{
	public:
		unsigned char UnknownData01_3[0x178]; // 0x2B8(0x178) UNKNOWN PROPERTY
		UVerticalBox VerticalBox_WidgetHolder; // 0x430(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetUI.FortVehicleInteractionWidgetHolder");
			return ret;
		}

		void HandleContextInfoUpdated(UFortInteractContextInfo ContextInfo); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BBBAD8
	};

}
