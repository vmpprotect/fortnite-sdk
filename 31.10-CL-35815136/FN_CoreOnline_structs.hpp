#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CoreOnline
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CoreOnline.JoinabilitySettings
	// Size: 0x10 (0x10 - 0x0)
	struct FJoinabilitySettings	
	{
	public:
		FName SessionName; // 0x0(0x4)
		bool bPublicSearchable; // 0x4(0x1)
		bool bAllowInvites; // 0x5(0x1)
		bool bJoinViaPresence; // 0x6(0x1)
		bool bJoinViaPresenceFriendsOnly; // 0x7(0x1)
		int32_t MaxPlayers; // 0x8(0x4)
		int32_t MaxPartySize; // 0xC(0x4)
	};


	// Struct CoreOnline.UniqueNetIdWrapper
	// Size: 0x1 (0x1 - 0x0)
	struct FUniqueNetIdWrapper	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
