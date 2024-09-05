#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineFrameworkUsabilityExperiment
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class OnlineFrameworkUsabilityExperiment.UsabilityExperimentSubsystem
	// Inherited from ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UUsabilityExperimentSubsystem : public ULocalPlayerSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineFrameworkUsabilityExperiment.UsabilityExperimentSubsystem");
			return ret;
		}
	};

}
