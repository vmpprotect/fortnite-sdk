#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UdpMessaging
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class UdpMessaging.UdpMessagingSettings
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UUdpMessagingSettings : public UObject	
	{
	public:
		bool EnabledByDefault; // 0x28(0x1)
		bool EnableTransport; // 0x29(0x1)
		bool bAutoRepair; // 0x2A(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x2B(0x1) UNKNOWN PROPERTY
		float MaxSendRate; // 0x2C(0x4)
		uint32_t AutoRepairAttemptLimit; // 0x30(0x4)
		uint16_t WorkQueueSize; // 0x34(0x2)
		bool bStopServiceWhenAppDeactivates; // 0x36(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x37(0x1) UNKNOWN PROPERTY
		FString UnicastEndpoint; // 0x38(0x10)
		FString MulticastEndpoint; // 0x48(0x10)
		EUdpMessageFormat MessageFormat; // 0x58(0x1)
		char MulticastTimeToLive; // 0x59(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
		TArray<FString> StaticEndpoints; // 0x60(0x10)
		TArray<FString> ExcludedEndpoints; // 0x70(0x10)
		bool bShareKnownNodesWithActiveConnections; // 0x80(0x1)
		bool EnableTunnel; // 0x81(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x82(0x6) UNKNOWN PROPERTY
		FString TunnelUnicastEndpoint; // 0x88(0x10)
		FString TunnelMulticastEndpoint; // 0x98(0x10)
		TArray<FString> RemoteTunnelEndpoints; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UdpMessaging.UdpMessagingSettings");
			return ret;
		}
	};

}
