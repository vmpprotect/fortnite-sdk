#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MidMatchObjectivesGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortGameStateComponent_MidMatchObjectiveParent : public UFortGameStateComponent	
	{
	public:
		FName ObjectiveCompletedStatName; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent");
			return ret;
		}

		void SetObjectiveCompletedStat(char SquadID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BD4578
	};

}
