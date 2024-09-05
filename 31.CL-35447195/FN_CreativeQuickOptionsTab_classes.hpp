#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeQuickOptionsTab
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreativeQuickOptionsTab.FortCreativeQuickOptionsTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x178 (0x570 - 0x3F8)
	class UFortCreativeQuickOptionsTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		FAthenaMapScreenContainerTabInfo MapScreenContainerTabInfo; // 0x428(0x40)
		FName QuickOptionsTabNameId; // 0x468(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x46C(0x4) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x470(0xF0)
		bool bIsDefaultActiveTab; // 0x560(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x561(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeQuickOptionsTab.FortCreativeQuickOptionsTab");
			return ret;
		}
	};

}
