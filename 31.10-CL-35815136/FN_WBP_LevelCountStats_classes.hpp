#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_LevelCountStats
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Career/WBP_LevelCountStats.WBP_LevelCountStats_C
	// Inherited from UFortBattlePassLevelCount -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C8 - 0x2C0)
	class UWBP_LevelCountStats_C : public UFortBattlePassLevelCount	
	{
	public:
		UWBP_BattlePassDynamicIcon_C* WBP_BattlePassDynamicIcon; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_LevelCountStats.WBP_LevelCountStats_C");
			return ret;
		}
	};

}
