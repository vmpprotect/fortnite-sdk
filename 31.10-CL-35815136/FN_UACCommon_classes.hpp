#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UACCommon
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class UACCommon.UACNetworkComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x180 (0x220 - 0xA0)
	class UUACNetworkComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x180]; // 0xA0(0x180) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UACCommon.UACNetworkComponent");
			return ret;
		}

		void SendPacketToServer(char EnhPacketType, TArray<char> Data); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74DF89B94(relative to base address)
		void SendPacketToClient(char EnhPacketType, TArray<char> Data); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74DF89ABC(relative to base address)
		void SendClientHello(uint32_t SessionKey); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74DF899A8(relative to base address)
	};

}
