#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BeanstalkReplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
