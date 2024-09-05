#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BeanstalkReplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BeanstalkReplayRuntime.FortGameStateComponent_BeanstalkReplay
	// Inherited from UFortGameStateComponent_Replay -> UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFortGameStateComponent_BeanstalkReplay : public UFortGameStateComponent_Replay	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkReplayRuntime.FortGameStateComponent_BeanstalkReplay");
			return ret;
		}
	};

}
