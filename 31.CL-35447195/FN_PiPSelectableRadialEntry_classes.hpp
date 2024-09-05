#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PiPSelectableRadialEntry
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /PictureInPicture/PiPSelectableRadialEntry.PiPSelectableRadialEntry_C
	// Inherited from UFortRadialPickerEntry -> UFortRadialSlot -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x1470 - 0x1440)
	class UPiPSelectableRadialEntry_C : public UFortRadialPickerEntry	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x8)
		UWidgetAnimation Selected; // 0x1448(0x8)
		FLinearColor DefaultSelectedColor; // 0x1450(0x10)
		FLinearColor DefaultUnselectedColor; // 0x1460(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPicture/PiPSelectableRadialEntry.PiPSelectableRadialEntry_C");
			return ret;
		}

		void BP_UpdateSelectionColor(bool Selected); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6080E00
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15DB6080F00
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15DB6081000
		void OnAvailabilityChanged(bool bIsAvailable); // Flags: Event|Protected|BlueprintEvent 0x15DB6080C00
		void ExecuteUbergraph_PiPSelectableRadialEntry(int32_t EntryPoint); // Flags: Final 0x15DB6080D00
	};

}
