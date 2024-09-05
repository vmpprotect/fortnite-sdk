#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StormSicknessUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class StormSicknessUI.StormSicknessWarningWidgetBase
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x368 - 0x320)
	class UStormSicknessWarningWidgetBase : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x40]; // 0x320(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x360(0x2)
		unsigned char UnknownData03_7[0x6]; // 0x362(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StormSicknessUI.StormSicknessWarningWidgetBase");
			return ret;
		}
	};

}
