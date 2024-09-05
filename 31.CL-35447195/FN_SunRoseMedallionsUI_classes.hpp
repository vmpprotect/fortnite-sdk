#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SunRoseMedallionsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SunRoseMedallionsUI.SunRoseMedallionsInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x350 - 0x320)
	class USunRoseMedallionsInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x320(0x8) UNKNOWN PROPERTY
		FGameplayTag MedallionTag; // 0x328(0x4)
		unsigned char UnknownData03_7[0x24]; // 0x32C(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseMedallionsUI.SunRoseMedallionsInfoWidget");
			return ret;
		}

		void OnPlayerDead(AFortPlayerStateAthena PSA, bool bIsDead); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4E5B8
		void OnMedallionTagChanged(AFortPlayerStateAthena InPlayerState); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4E4D8
		void HandleGameplayTagEvent(FGameplayTag UpdatedTag, int32_t TagCount); // Flags: Final|Native|Protected 0x7FF414D4E3F8
	};

}
