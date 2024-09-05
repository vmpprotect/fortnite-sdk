#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: STW_LagerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class STW_LagerRuntime.FortQuestLivingWorldVolume
	// Inherited from AFortAthenaLivingWorldVolume -> AVolume -> ABrush -> AActor -> UObject
	// Size: 0x50 (0x628 - 0x5D8)
	class AFortQuestLivingWorldVolume : public AFortAthenaLivingWorldVolume	
	{
	public:
		FGameplayTagContainer NoPlayerNeedsQuestFilterTags; // 0x5D8(0x20)
		FGameplayTagContainer PlayerNeedsQuestFilterTags; // 0x5F8(0x20)
		UFortQuestItemDefinition* RequiredQuest; // 0x618(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x620(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/STW_LagerRuntime.FortQuestLivingWorldVolume");
			return ret;
		}

		void HandlePIEQuestsUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};

}
