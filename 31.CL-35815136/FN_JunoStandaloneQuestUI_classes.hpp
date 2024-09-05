#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoStandaloneQuestUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoStandaloneQuestUI.StandaloneQuestMapPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x418 - 0x3F0)
	class UStandaloneQuestMapPanel : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x3F0(0x20) UNKNOWN PROPERTY
		UAthenaFullScreenQuestMapPanel* BP_AthenaQuestPanel; // 0x410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoStandaloneQuestUI.StandaloneQuestMapPanel");
			return ret;
		}
	};

}
