#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PiPSelectableRadialEntry
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /PictureInPicture/PiPSelectableRadialEntry.PiPSelectableRadialEntry_C
	// Inherited from UFortRadialPickerEntry -> UFortRadialSlot -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x1470 - 0x1440)
	class UPiPSelectableRadialEntry_C : public UFortRadialPickerEntry	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x8)
		UWidgetAnimation* Selected; // 0x1448(0x8)
		FLinearColor DefaultSelectedColor; // 0x1450(0x10)
		FLinearColor DefaultUnselectedColor; // 0x1460(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPicture/PiPSelectableRadialEntry.PiPSelectableRadialEntry_C");
			return ret;
		}

		void BP_UpdateSelectionColor(bool Selected); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAvailabilityChanged(bool bIsAvailable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PiPSelectableRadialEntry(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
