#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DiscordRPC
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DiscordRPC.DiscordRuntimeSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDiscordRuntimeSettings : public UObject	
	{
	public:
		bool bEnableJoinSecrets; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscordRPC.DiscordRuntimeSettings");
			return ret;
		}
	};

}
