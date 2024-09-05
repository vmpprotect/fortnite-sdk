#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeVideoPlayerUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x468 - 0x3F0)
	class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY
		USoundSourceBus* SourceBus; // 0x408(0x8)
		USoundClass* SoundClass; // 0x410(0x8)
		FDataTableRowHandle HoldToSkipAction; // 0x418(0x10)
		UCommonButtonLegacy* Button_Skip; // 0x428(0x8)
		UImage* Image_VideoTexture; // 0x430(0x8)
		float SkipButtonTimeout; // 0x438(0x4)
		unsigned char UnknownData01_6[0x14]; // 0x43C(0x14) UNKNOWN PROPERTY
		UAudioComponent* SoundComponent; // 0x450(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x458(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget");
			return ret;
		}

		void SetExternalComponents(UMediaTexture* VideoTextureExt, USoundSourceBus* ExtSourceBus); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515F89EC(relative to base address)
		void OnSkipButtonActionProgress(float HeldPercent); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515F8970(relative to base address)
		void OnSkipButtonActionComplete(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515F895C(relative to base address)
	};

}
