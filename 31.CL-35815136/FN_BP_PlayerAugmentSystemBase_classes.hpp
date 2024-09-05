#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BP_PlayerAugmentSystemBase
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /PlayerAugmentsCode/BP_PlayerAugmentSystemBase.BP_PlayerAugmentSystemBase_C
	// Inherited from UFortPlayerStateComponent_PlayerAugmentSystem -> UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1C0 - 0x1C0)
	class UBP_PlayerAugmentSystemBase_C : public UFortPlayerStateComponent_PlayerAugmentSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsCode/BP_PlayerAugmentSystemBase.BP_PlayerAugmentSystemBase_C");
			return ret;
		}
	};

}
