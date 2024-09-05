#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SocialUMG
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SocialUMG.SocialChatMessageEntryTextStyle
	// Size: 0x68 (0x68 - 0x0)
	struct FSocialChatMessageEntryTextStyle	
	{
	public:
		FSlateFontInfo FontInfo; // 0x0(0x58)
		FLinearColor ColorAndOpacity; // 0x58(0x10)
	};


	// Struct SocialUMG.SocialChatMessageEntryStyle
	// Size: 0x138 (0x138 - 0x0)
	struct FSocialChatMessageEntryStyle	
	{
	public:
		FSocialChatMessageEntryTextStyle SenderNameStyle; // 0x0(0x68)
		FSocialChatMessageEntryTextStyle ChannelNameStyle; // 0x68(0x68)
		FSocialChatMessageEntryTextStyle MessageTextStyle; // 0xD0(0x68)
	};

}
