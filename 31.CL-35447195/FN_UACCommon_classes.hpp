#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UACCommon
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class UACCommon.UACNetworkComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x180 (0x220 - 0xA0)
	class UUACNetworkComponent : public UActorComponent	
	{
	public:
		int32_t PlayerId; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x17C]; // 0xA4(0x17C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UACCommon.UACNetworkComponent");
			return ret;
		}

		void SendPacketToServer(char EnhPacketType, TArray Data); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414661378
		void SendPacketToClient(char EnhPacketType, TArray Data); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414661298
		void SendClientHello(uint32_t SessionKey); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF4146611B8
	};

}
