#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ForwardingChannels
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ForwardingChannels.ForwardingChannelFactory
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UForwardingChannelFactory : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ForwardingChannels.ForwardingChannelFactory");
			return ret;
		}
	};


	// Class ForwardingChannels.ForwardingChannelsSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UForwardingChannelsSubsystem : public UGameInstanceSubsystem	
	{
	public:
		TArray ForwardingChannelFactories; // 0x30(0x10)
		unsigned char UnknownData01_7[0x58]; // 0x40(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ForwardingChannels.ForwardingChannelsSubsystem");
			return ret;
		}
	};

}
