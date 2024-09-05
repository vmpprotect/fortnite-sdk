#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PacketHandler
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PacketHandler.HandlerComponentFactory
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHandlerComponentFactory : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PacketHandler.HandlerComponentFactory");
			return ret;
		}
	};


	// Class PacketHandler.PacketHandlerProfileConfig
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPacketHandlerProfileConfig : public UObject	
	{
	public:
		TArray<FString> Components; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PacketHandler.PacketHandlerProfileConfig");
			return ret;
		}
	};

}
