#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortOvershieldHelpers
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortOvershieldHelpers.FortOvershieldHelperComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class UFortOvershieldHelperComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0xA8]; // 0xA0(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortOvershieldHelpers.FortOvershieldHelperComponent");
			return ret;
		}

		void ClearOvershieldListenerDelegates(UGameplayAbility OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE6AA0
		void AssignOvershieldListenerDelegates(UGameplayAbility OwningAbility, FFortOvershieldDelegateContainer Delegates); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DE69C0
	};

}
