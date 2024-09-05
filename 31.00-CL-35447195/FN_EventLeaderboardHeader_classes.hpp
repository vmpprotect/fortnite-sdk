#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EventLeaderboardHeader
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/EventLeaderboardHeader.EventLeaderboardHeader_C
	// Inherited from UFortShowdownDetailView -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x728 - 0x710)
	class UEventLeaderboardHeader_C : public UFortShowdownDetailView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x8)
		UCommonBorder CommonBorder_ScoringTitleBG; // 0x718(0x8)
		UCommonTextBlock Text_RoundTitle; // 0x720(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/EventLeaderboardHeader.EventLeaderboardHeader_C");
			return ret;
		}

		void RefreshDataBP(); // Flags: Event|Protected|BlueprintEvent 0x15D87679600
		void ExecuteUbergraph_EventLeaderboardHeader(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D87679700
	};

}
