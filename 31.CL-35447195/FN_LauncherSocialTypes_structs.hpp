#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LauncherSocialTypes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LauncherSocialTypes.ChatChromeColorScheme
	// Size: 0x50 (0x50 - 0x0)
	struct FChatChromeColorScheme	
	{
	public:
		FLinearColor ChatEntryBackgroundColor; // 0x0(0x10)
		FLinearColor NoneActiveTabColor; // 0x10(0x10)
		FLinearColor TabFontColor; // 0x20(0x10)
		FLinearColor TabFontColorInverted; // 0x30(0x10)
		FLinearColor ChatBackgroundColor; // 0x40(0x10)
	};


	// Struct LauncherSocialTypes.ChatChromeMargins
	// Size: 0x64 (0x64 - 0x0)
	struct FChatChromeMargins	
	{
	public:
		float TabWidth; // 0x0(0x4)
		FMargin TabPadding; // 0x4(0x10)
		FMargin ChatWindowPadding; // 0x14(0x10)
		FMargin ChatWindowToEntryMargin; // 0x24(0x10)
		FMargin ChatChannelPadding; // 0x34(0x10)
		FMargin UserListButtonPadding; // 0x44(0x10)
		FMargin UserListIconPadding; // 0x54(0x10)
	};


	// Struct LauncherSocialTypes.ChatChromeStyle
	// Size: 0xA80 (0xA80 - 0x0)
	struct FChatChromeStyle	
	{
	public:
		FSlateBrush UserListBrush; // 0x0(0xB0)
		FSlateBrush ChatBackgroundBrush; // 0xB0(0xB0)
		FSlateBrush ChatEntryBackgroundBrush; // 0x160(0xB0)
		FSlateBrush ChannelBackgroundBrush; // 0x210(0xB0)
		FSlateBrush TabBackgroundBrush; // 0x2C0(0xB0)
		FButtonStyle TabSelectorButtonStyle; // 0x370(0x370)
		FMargin TabOptionPadding; // 0x6E0(0x10)
		FMargin TabContentPadding; // 0x6F0(0x10)
		FMargin TabClosePadding; // 0x700(0x10)
		FButtonStyle UserListButtonStyle; // 0x710(0x370)
	};


	// Struct LauncherSocialTypes.ChatColorScheme
	// Size: 0x120 (0x120 - 0x0)
	struct FChatColorScheme	
	{
	public:
		FLinearColor TimeStampColor; // 0x0(0x10)
		FLinearColor DefaultChatColor; // 0x10(0x10)
		FLinearColor WhisperChatColor; // 0x20(0x10)
		FLinearColor GlobalChatColor; // 0x30(0x10)
		FLinearColor FounderChatColor; // 0x40(0x10)
		FLinearColor GameChatColor; // 0x50(0x10)
		FLinearColor TeamChatColor; // 0x60(0x10)
		FLinearColor PartyChatColor; // 0x70(0x10)
		FLinearColor AdminChatColor; // 0x80(0x10)
		FLinearColor GameAdminChatColor; // 0x90(0x10)
		FLinearColor WhisperHyperlinkChatColor; // 0xA0(0x10)
		FLinearColor GlobalHyperlinkChatColor; // 0xB0(0x10)
		FLinearColor FounderHyperlinkChatColor; // 0xC0(0x10)
		FLinearColor GameHyperlinkChatColor; // 0xD0(0x10)
		FLinearColor TeamHyperlinkChatColor; // 0xE0(0x10)
		FLinearColor PartyHyperlinkChatColor; // 0xF0(0x10)
		FLinearColor EnemyColor; // 0x100(0x10)
		FLinearColor FriendlyColor; // 0x110(0x10)
	};


	// Struct LauncherSocialTypes.ChatMarkupStyle
	// Size: 0x820 (0x820 - 0x0)
	struct FChatMarkupStyle	
	{
	public:
		FButtonStyle MarkupButtonStyle; // 0x0(0x370)
		FTextBlockStyle MarkupTextStyle; // 0x370(0x2E0)
		FSlateBrush MarkupBackground; // 0x650(0xB0)
		FSlateColor ButtonColor; // 0x700(0x14)
		FSlateColor ButtonHoverColor; // 0x714(0x14)
		FSlateColor TipColor; // 0x728(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x73C(0x4) UNKNOWN PROPERTY
		FSlateBrush SeperatorBrush; // 0x740(0xB0)
		float SeperatorThickness; // 0x7F0(0x4)
		FMargin MarkupPadding; // 0x7F4(0x10)
		FMargin ButtonPadding; // 0x804(0x10)
		unsigned char UnknownData03_7[0xC]; // 0x814(0xC) UNKNOWN PROPERTY
	};


	// Struct LauncherSocialTypes.ChatStyle
	// Size: 0x1DA0 (0x1DA0 - 0x0)
	struct FChatStyle	
	{
	public:
		FEditableTextBoxStyle ChatEntryTextStyle; // 0x0(0xC80)
		FEditableTextBoxStyle ChatDisplayTextStyle; // 0xC80(0xC80)
		FScrollBoxStyle ScrollBorderStyle; // 0x1900(0x2F0)
		FSlateBrush MessageNotificationBrush; // 0x1BF0(0xB0)
		FMargin ChatEntryPadding; // 0x1CA0(0x10)
		float ChatEntryHeight; // 0x1CB0(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x1CB4(0xC) UNKNOWN PROPERTY
		FSlateBrush ChatMenuBackgroundBrush; // 0x1CC0(0xB0)
		FMargin FriendActionPadding; // 0x1D70(0x10)
		FMargin FriendActionHeaderPadding; // 0x1D80(0x10)
		FMargin FriendActionStatusMargin; // 0x1D90(0x10)
	};


	// Struct LauncherSocialTypes.SocialFontStyle
	// Size: 0x240 (0x240 - 0x0)
	struct FSocialFontStyle	
	{
	public:
		FSlateFontInfo FontSmall; // 0x0(0x58)
		FSlateFontInfo FontSmallBold; // 0x58(0x58)
		FSlateFontInfo FontNormal; // 0xB0(0x58)
		FSlateFontInfo FontNormalBold; // 0x108(0x58)
		FSlateFontInfo FontLarge; // 0x160(0x58)
		FSlateFontInfo FontLargeBold; // 0x1B8(0x58)
		FLinearColor DefaultFontColor; // 0x210(0x10)
		FLinearColor InvertedFontColor; // 0x220(0x10)
		FLinearColor DefaultDullFontColor; // 0x230(0x10)
	};


	// Struct LauncherSocialTypes.SocialListMargins
	// Size: 0x210 (0x210 - 0x0)
	struct FSocialListMargins	
	{
	public:
		FVector2D UserPresenceImageSize; // 0x0(0x10)
		FMargin HeaderButtonMargin; // 0x10(0x10)
		FMargin FriendsListMargin; // 0x20(0x10)
		FMargin FriendsListNoFriendsMargin; // 0x30(0x10)
		FMargin FriendsListHeaderMargin; // 0x40(0x10)
		FMargin FriendsListHeaderCountMargin; // 0x50(0x10)
		FMargin HeaderButtonContentMargin; // 0x60(0x10)
		FMargin FriendItemMargin; // 0x70(0x10)
		FMargin FriendItemStatusMargin; // 0x80(0x10)
		FMargin FriendTipStatusMargin; // 0x90(0x10)
		FMargin FriendItemPresenceMargin; // 0xA0(0x10)
		FMargin FriendItemPlatformMargin; // 0xB0(0x10)
		FMargin FriendItemTextScrollerMargin; // 0xC0(0x10)
		FMargin ConfirmationBorderMargin; // 0xD0(0x10)
		FMargin ConfirmationButtonMargin; // 0xE0(0x10)
		FMargin ConfirmationButtonContentMargin; // 0xF0(0x10)
		FMargin NoneFriendContentMargin; // 0x100(0x10)
		float NoneFriendContentHeight; // 0x110(0x4)
		float NoneFriendIconWidth; // 0x114(0x4)
		FMargin SubMenuBackIconMargin; // 0x118(0x10)
		FMargin SubMenuPageIconMargin; // 0x128(0x10)
		FMargin RadioSettingTitleMargin; // 0x138(0x10)
		FMargin SubMenuSearchIconMargin; // 0x148(0x10)
		FMargin SubMenuSearchTextMargin; // 0x158(0x10)
		FMargin SubMenuBackButtonMargin; // 0x168(0x10)
		FMargin SubMenuSettingButtonMargin; // 0x178(0x10)
		FMargin SubMenuListMargin; // 0x188(0x10)
		float SubMenuSeperatorThickness; // 0x198(0x4)
		float PresenceSeperatorThickness; // 0x19C(0x4)
		FMargin FriendTipMargin; // 0x1A0(0x10)
		FMargin FriendTipPresenceMargin; // 0x1B0(0x10)
		FMargin FriendTipSeperatorMargin; // 0x1C0(0x10)
		FMargin ToolTipMargin; // 0x1D0(0x10)
		FMargin TipStatusMargin; // 0x1E0(0x10)
		FMargin AddButtonMargin; // 0x1F0(0x10)
		FVector2D AddButtonSpacing; // 0x200(0x10)
	};


	// Struct LauncherSocialTypes.SocialListStyle
	// Size: 0x3610 (0x3610 - 0x0)
	struct FSocialListStyle	
	{
	public:
		FButtonStyle GlobalChatButtonStyle; // 0x0(0x370)
		FSlateBrush GlobalChatIcon; // 0x370(0xB0)
		FButtonStyle FriendItemButtonStyle; // 0x420(0x370)
		FButtonStyle ConfirmButtonStyle; // 0x790(0x370)
		FButtonStyle CancelButtonStyle; // 0xB00(0x370)
		FSlateColor ButtonContentColor; // 0xE70(0x14)
		FSlateColor ButtonHoverContentColor; // 0xE84(0x14)
		unsigned char UnknownData02_6[0x8]; // 0xE98(0x8) UNKNOWN PROPERTY
		FSlateBrush ActionMenuArrowBrush; // 0xEA0(0xB0)
		FSlateBrush ActionMenuArrowRightBrush; // 0xF50(0xB0)
		FSlateColor ActionMenuBackgroundColor; // 0x1000(0x14)
		unsigned char UnknownData03_6[0xC]; // 0x1014(0xC) UNKNOWN PROPERTY
		FSlateBrush ToolTipArrowBrush; // 0x1020(0xB0)
		FButtonStyle BackButtonStyle; // 0x10D0(0x370)
		FButtonStyle HeaderButtonStyle; // 0x1440(0x370)
		FButtonStyle FriendListActionButtonStyle; // 0x17B0(0x370)
		FSlateBrush AddFriendButtonContentBrush; // 0x1B20(0xB0)
		FSlateBrush StatusIconBrush; // 0x1BD0(0xB0)
		FSlateBrush PCIconBrush; // 0x1C80(0xB0)
		FSlateBrush ConsoleIconBrush; // 0x1D30(0xB0)
		FSlateBrush MobileIconBrush; // 0x1DE0(0xB0)
		FSlateBrush FacebookIconBrush; // 0x1E90(0xB0)
		FSlateBrush EpicIconBrush; // 0x1F40(0xB0)
		FSlateBrush FriendImageBrush; // 0x1FF0(0xB0)
		FSlateBrush OfflineBrush; // 0x20A0(0xB0)
		FSlateBrush OnlineBrush; // 0x2150(0xB0)
		FSlateBrush AwayBrush; // 0x2200(0xB0)
		FSlateBrush SpectateBrush; // 0x22B0(0xB0)
		FSlateBrush FriendsContainerBackground; // 0x2360(0xB0)
		FSlateBrush FriendsListBackground; // 0x2410(0xB0)
		FEditableTextBoxStyle AddFriendEditableTextStyle; // 0x24C0(0xC80)
		FSlateBrush BackBrush; // 0x3140(0xB0)
		FSlateBrush SelectedOptionBrush; // 0x31F0(0xB0)
		FSlateBrush SettingsBrush; // 0x32A0(0xB0)
		FSlateBrush SeperatorBrush; // 0x3350(0xB0)
		FSlateBrush PresenceSeperatorBrush; // 0x3400(0xB0)
		FSlateBrush FontSizeBrush; // 0x34B0(0xB0)
		FSlateBrush SearchBrush; // 0x3560(0xB0)
	};


	// Struct LauncherSocialTypes.ProfanityData
	// Size: 0x38 (0x38 - 0x0)
	struct FProfanityData	
	{
	public:
		FString CountryCode; // 0x0(0x10)
		FString ProfanityList; // 0x10(0x10)
		FString Whitelist; // 0x20(0x10)
		bool bAutoAdd; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct LauncherSocialTypes.SocialSoundSchema
	// Size: 0x48 (0x48 - 0x0)
	struct FSocialSoundSchema	
	{
	public:
		FSlateSound MessageReceivedSound; // 0x0(0x18)
		FSlateSound PartyInviteReceivedSound; // 0x18(0x18)
		FSlateSound FriendInviteReceivedSound; // 0x30(0x18)
	};


	// Struct LauncherSocialTypes.SocialStyle
	// Size: 0x8FF0 (0x8FF0 - 0x0)
	struct FSocialStyle	
	{
	public:
		FScrollBarStyle ScrollBarStyle; // 0x0(0x650)
		FButtonStyle ActionButtonStyle; // 0x650(0x370)
		FSocialFontStyle SmallFontStyle; // 0x9C0(0x240)
		FSocialFontStyle NormalFontStyle; // 0xC00(0x240)
		FSocialFontStyle LargeFontStyle; // 0xE40(0x240)
		FSocialFontStyle ChatFontStyle; // 0x1080(0x240)
		FCheckBoxStyle CheckBoxStyle; // 0x12C0(0x950)
		FCheckBoxStyle RadioBoxStyle; // 0x1C10(0x950)
		FSocialListStyle SocialListStyle; // 0x2560(0x3610)
		FSocialListMargins SocialListMargins; // 0x5B70(0x210)
		FChatStyle ChatStyle; // 0x5D80(0x1DA0)
		FChatColorScheme ChatColorScheme; // 0x7B20(0x120)
		FChatChromeStyle ChatChromeStyle; // 0x7C40(0xA80)
		FChatChromeMargins ChatChromeMargins; // 0x86C0(0x64)
		FChatChromeColorScheme ChatChromeColorScheme; // 0x8724(0x50)
		unsigned char UnknownData02_6[0xC]; // 0x8774(0xC) UNKNOWN PROPERTY
		FChatMarkupStyle ChatMarkupStyle; // 0x8780(0x820)
		FSocialSoundSchema SoundSchema; // 0x8FA0(0x48)
		unsigned char UnknownData03_7[0x8]; // 0x8FE8(0x8) UNKNOWN PROPERTY
	};

}
