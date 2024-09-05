#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeVideoPlayerUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x470 - 0x3F8)
	class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		USoundSourceBus SourceBus; // 0x410(0x8)
		USoundClass SoundClass; // 0x418(0x8)
		FDataTableRowHandle HoldToSkipAction; // 0x420(0x10)
		UCommonButtonLegacy Button_Skip; // 0x430(0x8)
		UImage Image_VideoTexture; // 0x438(0x8)
		float SkipButtonTimeout; // 0x440(0x4)
		unsigned char UnknownData04_6[0x14]; // 0x444(0x14) UNKNOWN PROPERTY
		UAudioComponent SoundComponent; // 0x458(0x8)
		unsigned char UnknownData05_7[0x10]; // 0x460(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget");
			return ret;
		}

		void SetExternalComponents(UMediaTexture VideoTextureExt, USoundSourceBus ExtSourceBus); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D65378
		void OnSkipButtonActionProgress(float HeldPercent); // Flags: Final|Native|Private 0x7FF414D65298
		void OnSkipButtonActionComplete(); // Flags: Final|Native|Private 0x7FF414D651B8
	};

}
