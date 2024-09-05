#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PiPPickerOverlay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /PictureInPicture/PiPPickerOverlay.PiPPickerOverlay_C
	// Inherited from UFortPickerOverlay -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x540 - 0x508)
	class UPiPPickerOverlay_C : public UFortPickerOverlay	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x8)
		UWidgetAnimation Intro; // 0x510(0x8)
		UWidgetAnimation SelectionSet; // 0x518(0x8)
		UImage AlignmentDesignViewOnlyu; // 0x520(0x8)
		UImage Backplate_Shadow; // 0x528(0x8)
		UPictureInPictureClient PictureInPictureClient; // 0x530(0x8)
		UPictureInPictureMediaController PiPMediaController; // 0x538(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPicture/PiPPickerOverlay.PiPPickerOverlay_C");
			return ret;
		}

		void BP_OnItemChosen(); // Flags: Event|Public|BlueprintEvent 0x15DB6080200
		void PlaySelectionAnimation(); // Flags: Event|Protected|BlueprintEvent 0x15DB608C500
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6080100
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15DB6080300
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15DB6080400
		void ExecuteUbergraph_PiPPickerOverlay(int32_t EntryPoint); // Flags: Final 0x15DB608C600
	};

}
