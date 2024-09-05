#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TakedownMedallionUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TakedownMedallionUI.AthenaInventoryGroupTakedownMedallion
	// Inherited from UAthenaInventoryGroupBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x350 - 0x340)
	class UAthenaInventoryGroupTakedownMedallion : public UAthenaInventoryGroupBase	
	{
	public:
		FGameplayTag MedallionGameplayTag; // 0x340(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x344(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TakedownMedallionUI.AthenaInventoryGroupTakedownMedallion");
			return ret;
		}
	};

}
