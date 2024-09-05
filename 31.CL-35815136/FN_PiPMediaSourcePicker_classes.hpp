#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PiPMediaSourcePicker
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /PictureInPicture/PiPMediaSourcePicker.PiPMediaSourcePicker_C
	// Inherited from UPictureInPictureSourcePicker -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x5E0 - 0x5C0)
	class UPiPMediaSourcePicker_C : public UPictureInPictureSourcePicker	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x5C0(0x8)
		UCommonActionWidget* ToggleActionWidget; // 0x5C8(0x8)
		FMargin FrontendPadding; // 0x5D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPicture/PiPMediaSourcePicker.PiPMediaSourcePicker_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PiPMediaSourcePicker(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
