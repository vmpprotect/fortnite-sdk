#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StormSicknessUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class StormSicknessUI.StormSicknessWarningWidgetBase
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x360 - 0x318)
	class UStormSicknessWarningWidgetBase : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x318(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x358(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x35A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StormSicknessUI.StormSicknessWarningWidgetBase");
			return ret;
		}
	};

}
