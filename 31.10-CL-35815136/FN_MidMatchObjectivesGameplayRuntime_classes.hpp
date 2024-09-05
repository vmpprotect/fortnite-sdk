#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MidMatchObjectivesGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortGameStateComponent_MidMatchObjectiveParent : public UFortGameStateComponent	
	{
	public:
		FName ObjectiveCompletedStatName; // 0xA0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent");
			return ret;
		}

		void SetObjectiveCompletedStat(char SquadID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F4937FC(relative to base address)
	};

}
