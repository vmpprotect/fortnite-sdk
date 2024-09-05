#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: KeysAndLocksUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class KeysAndLocksUI.KeyPlayerInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x348 - 0x320)
	class UKeyPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x320(0x8) UNKNOWN PROPERTY
		FGameplayTag KeyStatusTag; // 0x328(0x4)
		unsigned char UnknownData03_7[0x1C]; // 0x32C(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KeysAndLocksUI.KeyPlayerInfoWidget");
			return ret;
		}

		void OnKeyStatusActivated(AFortPlayerStateAthena InPlayerState, bool bActivated); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD8718
		void HandleGameplayTagEvent(FGameplayTag UpdatedTag, int32_t TagCount); // Flags: Final|Native|Protected 0x7FF414BD8638
	};

}
