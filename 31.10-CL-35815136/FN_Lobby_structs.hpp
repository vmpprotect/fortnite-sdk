#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Lobby
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Lobby.LobbyPlayerStateActorInfo
	// Inherited from FFastArraySerializerItem
	// Size: 0xC (0x18 - 0xC)
	struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		ALobbyBeaconPlayerState* LobbyPlayerState; // 0x10(0x8)
	};


	// Struct Lobby.LobbyPlayerStateInfoArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FLobbyPlayerStateInfoArray : public FFastArraySerializer	
	{
	public:
		TArray<FLobbyPlayerStateActorInfo> Players; // 0x108(0x10)
		ALobbyBeaconState* ParentState; // 0x118(0x8)
	};

}
