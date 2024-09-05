#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EventLeaderboardEventDetails
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/EventLeaderboardEventDetails.EventLeaderboardEventDetails_C
	// Inherited from UFortShowdownDetailView -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x730 - 0x710)
	class UEventLeaderboardEventDetails_C : public UFortShowdownDetailView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x8)
		UCommonTextBlock Text_EventName; // 0x718(0x8)
		UCommonTextBlock Text_RoundAndRegionName; // 0x720(0x8)
		UCommonTextBlock Text_SessionName; // 0x728(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/EventLeaderboardEventDetails.EventLeaderboardEventDetails_C");
			return ret;
		}

		void RefreshDataBP(); // Flags: Event|Protected|BlueprintEvent 0x15D87676800
		void ExecuteUbergraph_EventLeaderboardEventDetails(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D87676900
	};

}
