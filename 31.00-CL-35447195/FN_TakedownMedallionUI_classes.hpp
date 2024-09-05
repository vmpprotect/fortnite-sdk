#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TakedownMedallionUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class TakedownMedallionUI.AthenaInventoryGroupTakedownMedallion
	// Inherited from UAthenaInventoryGroupBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x360 - 0x350)
	class UAthenaInventoryGroupTakedownMedallion : public UAthenaInventoryGroupBase	
	{
	public:
		FGameplayTag MedallionGameplayTag; // 0x350(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x354(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TakedownMedallionUI.AthenaInventoryGroupTakedownMedallion");
			return ret;
		}
	};

}
