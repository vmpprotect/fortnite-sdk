#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PiPPickerOverlay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /PictureInPicture/PiPPickerOverlay.PiPPickerOverlay_C
	// Inherited from UFortPickerOverlay -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x568 - 0x530)
	class UPiPPickerOverlay_C : public UFortPickerOverlay	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x8)
		UWidgetAnimation* Intro; // 0x538(0x8)
		UWidgetAnimation* SelectionSet; // 0x540(0x8)
		UImage* AlignmentDesignViewOnlyu; // 0x548(0x8)
		UImage* Backplate_Shadow; // 0x550(0x8)
		UPictureInPictureClient* PictureInPictureClient; // 0x558(0x8)
		UPictureInPictureMediaController* PiPMediaController; // 0x560(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPicture/PiPPickerOverlay.PiPPickerOverlay_C");
			return ret;
		}

		void BP_OnItemChosen(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySelectionAnimation(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PiPPickerOverlay(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
