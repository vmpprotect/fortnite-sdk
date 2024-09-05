#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EventLeaderboardHeader
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/EventLeaderboardHeader.EventLeaderboardHeader_C
	// Inherited from UFortShowdownDetailView -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x720 - 0x708)
	class UEventLeaderboardHeader_C : public UFortShowdownDetailView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x8)
		UCommonBorder* CommonBorder_ScoringTitleBG; // 0x710(0x8)
		UCommonTextBlock* Text_RoundTitle; // 0x718(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/EventLeaderboardHeader.EventLeaderboardHeader_C");
			return ret;
		}

		void RefreshDataBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_EventLeaderboardHeader(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
