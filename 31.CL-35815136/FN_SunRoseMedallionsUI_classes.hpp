#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SunRoseMedallionsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SunRoseMedallionsUI.SunRoseMedallionsInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x348 - 0x318)
	class USunRoseMedallionsInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		FGameplayTag MedallionTag; // 0x320(0x4)
		unsigned char UnknownData01_7[0x24]; // 0x324(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseMedallionsUI.SunRoseMedallionsInfoWidget");
			return ret;
		}

		void OnPlayerDead(AFortPlayerStateAthena* PSA, bool bIsDead); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMedallionTagChanged(AFortPlayerStateAthena* InPlayerState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayTagEvent(FGameplayTag UpdatedTag, int32_t TagCount); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75155F090(relative to base address)
	};

}
