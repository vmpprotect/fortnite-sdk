#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SocialUMG
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
