#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_LevelCountStats
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Career/WBP_LevelCountStats.WBP_LevelCountStats_C
	// Inherited from UFortBattlePassLevelCount -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2D0 - 0x2C8)
	class UWBP_LevelCountStats_C : public UFortBattlePassLevelCount	
	{
	public:
		UWBP_BattlePassDynamicIcon_C WBP_BattlePassDynamicIcon; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_LevelCountStats.WBP_LevelCountStats_C");
			return ret;
		}
	};

}
