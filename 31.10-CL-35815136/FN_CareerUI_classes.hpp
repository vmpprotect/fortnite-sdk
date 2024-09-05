#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CareerUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CareerUI.FortUIGameFeatureAction_CompeteTab
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UFortUIGameFeatureAction_CompeteTab : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UClass*> OldCareerStatsScreenClass; // 0x28(0x20)
		TWeakObjectPtr<UClass*> NewCareerStatsScreenClass; // 0x48(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CareerUI.FortUIGameFeatureAction_CompeteTab");
			return ret;
		}
	};

}
