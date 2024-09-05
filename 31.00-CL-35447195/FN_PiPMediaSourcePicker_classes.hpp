#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PiPMediaSourcePicker
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /PictureInPicture/PiPMediaSourcePicker.PiPMediaSourcePicker_C
	// Inherited from UPictureInPictureSourcePicker -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x5F0 - 0x5D0)
	class UPiPMediaSourcePicker_C : public UPictureInPictureSourcePicker	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x5D0(0x8)
		UCommonActionWidget ToggleActionWidget; // 0x5D8(0x8)
		FMargin FrontendPadding; // 0x5E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPicture/PiPMediaSourcePicker.PiPMediaSourcePicker_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608C200
		void ExecuteUbergraph_PiPMediaSourcePicker(int32_t EntryPoint); // Flags: Final 0x15DB608C100
	};

}
