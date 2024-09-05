#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BP_PlayerAugmentSystemBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
