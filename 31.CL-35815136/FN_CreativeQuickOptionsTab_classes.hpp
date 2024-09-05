#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeQuickOptionsTab
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CreativeQuickOptionsTab.FortCreativeQuickOptionsTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x180 (0x570 - 0x3F0)
	class UFortCreativeQuickOptionsTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		FAthenaMapScreenContainerTabInfo MapScreenContainerTabInfo; // 0x420(0x40)
		FName QuickOptionsTabNameId; // 0x460(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x464(0xC) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x470(0xF0)
		bool bIsDefaultActiveTab; // 0x560(0x1)
		unsigned char UnknownData02_7[0xF]; // 0x561(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeQuickOptionsTab.FortCreativeQuickOptionsTab");
			return ret;
		}
	};

}
