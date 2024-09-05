#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CareerUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CareerUI.FortUIGameFeatureAction_CompeteTab
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UFortUIGameFeatureAction_CompeteTab : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr OldCareerStatsScreenClass; // 0x28(0x20)
		TWeakObjectPtr NewCareerStatsScreenClass; // 0x48(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CareerUI.FortUIGameFeatureAction_CompeteTab");
			return ret;
		}
	};

}
