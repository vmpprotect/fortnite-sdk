#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OodleNetworkHandlerComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
