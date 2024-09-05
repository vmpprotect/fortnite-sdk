#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommChannelsDebugRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CommChannelsDebugRuntime.CommChannelsDebugDrawSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UCommChannelsDebugDrawSubsystem : public UTickableWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommChannelsDebugRuntime.CommChannelsDebugDrawSubsystem");
			return ret;
		}
	};

}
