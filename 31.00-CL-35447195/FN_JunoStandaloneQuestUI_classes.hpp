#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoStandaloneQuestUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoStandaloneQuestUI.StandaloneQuestMapPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x420 - 0x3F8)
	class UStandaloneQuestMapPanel : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x20]; // 0x3F8(0x20) UNKNOWN PROPERTY
		UAthenaFullScreenQuestMapPanel BP_AthenaQuestPanel; // 0x418(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoStandaloneQuestUI.StandaloneQuestMapPanel");
			return ret;
		}
	};

}
