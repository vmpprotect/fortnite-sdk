#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortOvershieldHelpers
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortOvershieldHelpers.FortOvershieldHelperComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class UFortOvershieldHelperComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0xA8]; // 0xA0(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortOvershieldHelpers.FortOvershieldHelperComponent");
			return ret;
		}

		void ClearOvershieldListenerDelegates(UGameplayAbility* OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7512579E8(relative to base address)
		void AssignOvershieldListenerDelegates(UGameplayAbility* OwningAbility, FFortOvershieldDelegateContainer Delegates); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751257868(relative to base address)
	};

}
