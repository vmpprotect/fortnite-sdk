#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PacketHandler
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TArray Components; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PacketHandler.PacketHandlerProfileConfig");
			return ret;
		}
	};

}
