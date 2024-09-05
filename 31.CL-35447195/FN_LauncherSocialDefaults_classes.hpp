#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LauncherSocialDefaults
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LauncherSocialDefaults.ChatColorSchemeDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x120 (0x150 - 0x30)
	class UChatColorSchemeDataAsset : public UDataAsset	
	{
	public:
		FChatColorScheme ChatColorData; // 0x30(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.ChatColorSchemeDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialActionButtonStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x370 (0x3A0 - 0x30)
	class USocialActionButtonStyleDataAsset : public UDataAsset	
	{
	public:
		FButtonStyle Style; // 0x30(0x370)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialActionButtonStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class USocialChatChromeColorSchemeDataAsset : public UDataAsset	
	{
	public:
		FChatChromeColorScheme Style; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialChatChromeMarginsDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class USocialChatChromeMarginsDataAsset : public UDataAsset	
	{
	public:
		FChatChromeMargins Style; // 0x30(0x64)
		unsigned char UnknownData01_7[0x4]; // 0x94(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialChatChromeMarginsDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialChatChromeStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0xA80 (0xAB0 - 0x30)
	class USocialChatChromeStyleDataAsset : public UDataAsset	
	{
	public:
		FChatChromeStyle Style; // 0x30(0xA80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialChatChromeStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialChatMarkupStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x820 (0x850 - 0x30)
	class USocialChatMarkupStyleDataAsset : public UDataAsset	
	{
	public:
		FChatMarkupStyle Style; // 0x30(0x820)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialChatMarkupStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialChatStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x1DA0 (0x1DD0 - 0x30)
	class USocialChatStyleDataAsset : public UDataAsset	
	{
	public:
		FChatStyle Style; // 0x30(0x1DA0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialChatStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialCheckBoxStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x950 (0x980 - 0x30)
	class USocialCheckBoxStyleDataAsset : public UDataAsset	
	{
	public:
		FCheckBoxStyle Style; // 0x30(0x950)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialCheckBoxStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialFontStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x240 (0x270 - 0x30)
	class USocialFontStyleDataAsset : public UDataAsset	
	{
	public:
		FSocialFontStyle Style; // 0x30(0x240)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialFontStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialListMarginsDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x210 (0x240 - 0x30)
	class USocialListMarginsDataAsset : public UDataAsset	
	{
	public:
		FSocialListMargins Style; // 0x30(0x210)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialListMarginsDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialListStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x3610 (0x3640 - 0x30)
	class USocialListStyleDataAsset : public UDataAsset	
	{
	public:
		FSocialListStyle Style; // 0x30(0x3610)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialListStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialProfanityDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class USocialProfanityDataAsset : public UDataAsset	
	{
	public:
		TArray ProfanityData; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialProfanityDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialRadioBoxStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x950 (0x980 - 0x30)
	class USocialRadioBoxStyleDataAsset : public UDataAsset	
	{
	public:
		FCheckBoxStyle Style; // 0x30(0x950)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialRadioBoxStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialScrollBarStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x650 (0x680 - 0x30)
	class USocialScrollBarStyleDataAsset : public UDataAsset	
	{
	public:
		FScrollBarStyle Style; // 0x30(0x650)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialScrollBarStyleDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialSoundSchemaDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class USocialSoundSchemaDataAsset : public UDataAsset	
	{
	public:
		FSocialSoundSchema SoundSchema; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialSoundSchemaDataAsset");
			return ret;
		}
	};


	// Class LauncherSocialDefaults.SocialStyleDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x9080 (0x90B0 - 0x30)
	class USocialStyleDataAsset : public UDataAsset	
	{
	public:
		USocialFontStyleDataAsset SmallFontStyle; // 0x30(0x8)
		USocialFontStyleDataAsset NormalFontStyle; // 0x38(0x8)
		USocialFontStyleDataAsset LargeFontStyle; // 0x40(0x8)
		USocialFontStyleDataAsset ChatFontStyle; // 0x48(0x8)
		USocialListStyleDataAsset SocialListStyle; // 0x50(0x8)
		USocialListMarginsDataAsset SocialListMargins; // 0x58(0x8)
		USocialChatStyleDataAsset ChatStyle; // 0x60(0x8)
		USocialChatChromeStyleDataAsset ChatChromeStyle; // 0x68(0x8)
		USocialChatChromeMarginsDataAsset ChatChromeMargins; // 0x70(0x8)
		USocialChatChromeColorSchemeDataAsset ChatChromeColorScheme; // 0x78(0x8)
		UChatColorSchemeDataAsset ChatColorScheme; // 0x80(0x8)
		USocialSoundSchemaDataAsset SoundSchema; // 0x88(0x8)
		USocialActionButtonStyleDataAsset ActionButtonStyle; // 0x90(0x8)
		USocialCheckBoxStyleDataAsset CheckBoxStyle; // 0x98(0x8)
		USocialRadioBoxStyleDataAsset RadioBoxStyle; // 0xA0(0x8)
		USocialScrollBarStyleDataAsset ScrollBoxStyle; // 0xA8(0x8)
		USocialChatMarkupStyleDataAsset MarkupStyle; // 0xB0(0x8)
		USocialProfanityDataAsset ProfanityDataAsset; // 0xB8(0x8)
		unsigned char UnknownData01_7[0x8FF0]; // 0xC0(0x8FF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LauncherSocialDefaults.SocialStyleDataAsset");
			return ret;
		}
	};

}
