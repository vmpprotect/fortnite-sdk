#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OodleNetworkHandlerComponent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/OodleNetworkHandlerComponent.EOodleNetworkEnableMode
	enum EOodleNetworkEnableMode
	{
		EOodleNetworkEnableMode__AlwaysEnabled = 0,
		EOodleNetworkEnableMode__WhenCompressedPacketReceived = 1,
	};


	// Enum /Script/OodleNetworkHandlerComponent.EOodleNetResult
	enum EOodleNetResult
	{
		EOodleNetResult__Unknown = 0,
		EOodleNetResult__Success = 1,
		EOodleNetResult__OodleDecodeFailed = 2,
		EOodleNetResult__OodleSerializePayloadFail = 3,
		EOodleNetResult__OodleBadDecompressedLength = 4,
		EOodleNetResult__OodleNoDictionary = 5,
	};

}
