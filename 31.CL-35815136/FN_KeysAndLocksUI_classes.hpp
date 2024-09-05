#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: KeysAndLocksUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class KeysAndLocksUI.KeyPlayerInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x340 - 0x318)
	class UKeyPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		FGameplayTag KeyStatusTag; // 0x320(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x324(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KeysAndLocksUI.KeyPlayerInfoWidget");
			return ret;
		}

		void OnKeyStatusActivated(AFortPlayerStateAthena* InPlayerState, bool bActivated); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayTagEvent(FGameplayTag UpdatedTag, int32_t TagCount); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A3F84(relative to base address)
	};

}
