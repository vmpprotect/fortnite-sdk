#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CustomControlsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CustomControlsUI.CustomControlsUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class ACustomControlsUIDirector : public ADynamicUIDirectorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsUI.CustomControlsUIDirector");
			return ret;
		}

		void BP_OnOptionsDeactivated(UCustomControlOptions_Base Options); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE76D8
		void BP_OnOptionsActivated(UCustomControlOptions_Base Options); // Flags: Event|Protected|BlueprintEvent 0x7FF414CE75F8
	};


	// Class CustomControlsUI.TwinStickCursorWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UTwinStickCursorWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CustomControlsUI.TwinStickCursorWidget");
			return ret;
		}
	};

}
