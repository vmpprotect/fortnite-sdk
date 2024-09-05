#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TacOvershieldUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TacOvershieldUI.TacOvershieldPlayerInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x328 - 0x318)
	class UTacOvershieldPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x318(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TacOvershieldUI.TacOvershieldPlayerInfoWidget");
			return ret;
		}

		void OnPlayerStateSet(AFortPlayerStateAthena* InPlayerState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOvershieldStateChanged(float Overshield, float OvershieldMax); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
