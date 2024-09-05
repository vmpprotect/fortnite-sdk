#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SocialUMG
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SocialUMG.DesignerPreviewChatChannel
	// Inherited from USocialChatChannel -> UObject
	// Size: 0x60 (0x140 - 0xE0)
	class UDesignerPreviewChatChannel : public USocialChatChannel	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0xE0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.DesignerPreviewChatChannel");
			return ret;
		}
	};


	// Class SocialUMG.SocialChatChannelTab
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class USocialChatChannelTab : public UCommonButtonLegacy	
	{
	public:
		USocialChatChannel ChatChannel; // 0x13E0(0x8)
		UCommonTextBlock CommonText_ChannelName; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatChannelTab");
			return ret;
		}
	};


	// Class SocialUMG.SocialChatContainer
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x310 - 0x2B8)
	class USocialChatContainer : public UUserWidget	
	{
	public:
		USocialChatManager ChatManager; // 0x2B8(0x8)
		TArray JoinedChannels; // 0x2C0(0x10)
		USocialChatChannel ActiveChannel; // 0x2D0(0x8)
		UCommonButtonGroupLegacy TabButtonGroup; // 0x2D8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		USocialChatMessageList ChatList_Messages; // 0x2E8(0x8)
		USocialChatEditableText ChatEditableText_MessageEntry; // 0x2F0(0x8)
		UCommonButtonBase Button_SendMessage; // 0x2F8(0x8)
		UDynamicEntryBox EntryBox_JoinedChannels; // 0x300(0x8)
		UScrollBox ScrollBox_Channels; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatContainer");
			return ret;
		}

		void SendCurrentMessage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC9B10
		void OnChatOpenChanged(bool bShouldBeOpen); // Flags: Event|Protected|BlueprintEvent 0x7FF413FC9A30
		void HandleRightTabPressed(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC9950
		void HandleLeftTabPressed(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC9870
		void FocusEditableText(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC9790
		void DynamicHandleMessageTextCommitted(FText& MessageText, TEnumAsByte CommitMethod); // Flags: Final|Native|Private|HasOutParms 0x7FF413FC96B0
	};


	// Class SocialUMG.SocialChatMessageEntry
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x160 (0x418 - 0x2B8)
	class USocialChatMessageEntry : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x2B8(0x18) UNKNOWN PROPERTY
		FSocialChatMessageEntryStyle DefaultStyle; // 0x2D0(0x138)
		UCommonRichTextBlock RichText_Message; // 0x408(0x8)
		UButton Button_MessageButton; // 0x410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatMessageEntry");
			return ret;
		}

		void OnMessageSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF4149C5318
		bool CanInteract(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4149C5238
	};


	// Class SocialUMG.SocialChatMessageList
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x3A0 - 0x288)
	class USocialChatMessageList : public UListViewBase	
	{
	public:
		unsigned char UnknownData03_3[0xE8]; // 0x288(0xE8) UNKNOWN PROPERTY
		bool bIsFocusable; // 0x370(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x371(0x7) UNKNOWN PROPERTY
		USocialChatChannel ActiveChannel; // 0x378(0x8)
		unsigned char UnknownData05_7[0x20]; // 0x380(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatMessageList");
			return ret;
		}
	};


	// Class SocialUMG.SocialGroupListEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x1410 - 0x13E0)
	class USocialGroupListEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UClass ActionMenuClass; // 0x13E8(0x8)
		USocialGroupChannel SocialGroup; // 0x13F0(0x8)
		UTextBlock Text_GroupName; // 0x13F8(0x8)
		UMenuAnchor MenuAnchor_Actions; // 0x1400(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x1408(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialGroupListEntry");
			return ret;
		}

		UUserWidget HandleGetMenuContent(); // Flags: Final|Native|Protected 0x7FF4149C53F8
	};


	// Class SocialUMG.SocialGroupTreeView
	// Inherited from UTreeView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0xBB0 - 0xB88)
	class USocialGroupTreeView : public UTreeView	
	{
	public:
		UClass GroupEntryWidgetClass; // 0xB88(0x8)
		UClass UserEntryWidgetClass; // 0xB90(0x8)
		UClass ActionMenuClass; // 0xB98(0x8)
		USocialInteractionMenu ActionMenu; // 0xBA0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xBA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialGroupTreeView");
			return ret;
		}
	};


	// Class SocialUMG.SocialInteractionButton
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x1490 - 0x13E0)
	class USocialInteractionButton : public UCommonButtonLegacy	
	{
	public:
		FLinearColor DefaultIndicatorColor; // 0x13E0(0x10)
		FLinearColor AlertingIndicatorColor; // 0x13F0(0x10)
		unsigned char UnknownData01_6[0x80]; // 0x1400(0x80) UNKNOWN PROPERTY
		UCommonTextBlock Text_InteractionName; // 0x1480(0x8)
		UBorder Border_InteractionIndicator; // 0x1488(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialInteractionButton");
			return ret;
		}

		void OnInteractionSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF4149C5698
		bool IsPlatformOnlyFriend(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4149C55B8
		FName GetInteractionName(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4149C54D8
	};


	// Class SocialUMG.SocialActionMenu
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x438 - 0x3F8)
	class USocialActionMenu : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x3F8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialActionMenu");
			return ret;
		}

		void OnOpened(); // Flags: Event|Protected|BlueprintEvent 0x7FF4149C5858
		void HandleMenuAnchorOpenChanged(bool bIsOpen); // Flags: Final|Native|Protected 0x7FF4149C5778
	};


	// Class SocialUMG.SocialInteractionMenu
	// Inherited from USocialActionMenu -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x4A0 - 0x438)
	class USocialInteractionMenu : public USocialActionMenu	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x438(0x30) UNKNOWN PROPERTY
		UDynamicEntryBox EntryBox_PositiveInteractions; // 0x468(0x8)
		UDynamicEntryBox EntryBox_NegativeInteractions; // 0x470(0x8)
		USpacer Spacer_InteractionSeparator; // 0x478(0x8)
		UCommonWidgetSwitcherLegacy Switcher_Confirmation; // 0x480(0x8)
		UTextBlock Text_ConfirmationLabel; // 0x488(0x8)
		UCommonButtonLegacy Button_Confirm; // 0x490(0x8)
		UCommonButtonLegacy Button_Decline; // 0x498(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialInteractionMenu");
			return ret;
		}

		void OnToggleConfirmation(bool bIsVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF4149C5A18
		UWidget GetFirstEntryToCenter(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4149C5938
	};


	// Class SocialUMG.SocialNameTextBlock
	// Inherited from UCommonRichTextBlock -> URichTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x820 - 0x7F8)
	class USocialNameTextBlock : public UCommonRichTextBlock	
	{
	public:
		USocialUser SocialUser; // 0x7F8(0x8)
		float MinDesiredSize; // 0x800(0x4)
		float MaxDesiredSize; // 0x804(0x4)
		bool bShowSecondName; // 0x808(0x1)
		EPlatformIconDisplayRule PlatformIconDisplayRule; // 0x809(0x1)
		bool bWrapToNextLine; // 0x80A(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x80B(0x1) UNKNOWN PROPERTY
		FColor SecondNameColor; // 0x80C(0x4)
		int32_t SecondNameFontSize; // 0x810(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x814(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialNameTextBlock");
			return ret;
		}
	};


	// Class SocialUMG.SocialListEntryBase
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class USocialListEntryBase : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x13E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialListEntryBase");
			return ret;
		}
	};


	// Class SocialUMG.SocialListInteractableEntryBase
	// Inherited from USocialListEntryBase -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1410 - 0x13F8)
	class USocialListInteractableEntryBase : public USocialListEntryBase	
	{
	public:
		UClass ActionMenuClass; // 0x13F8(0x8)
		UMenuAnchor MenuAnchor_Actions; // 0x1400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialListInteractableEntryBase");
			return ret;
		}

		void HandleMenuOpenChanged(bool bIsMenuOpen); // Flags: Final|Native|Private 0x7FF4149C5BD8
		UUserWidget HandleGetMenuContent(); // Flags: Final|Native|Protected 0x7FF4149C5AF8
	};


	// Class SocialUMG.SocialListUserEntryBase
	// Inherited from USocialListInteractableEntryBase -> USocialListEntryBase -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1430 - 0x1408)
	class USocialListUserEntryBase : public USocialListInteractableEntryBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x1408(0x8) UNKNOWN PROPERTY
		USocialNameTextBlock Text_SocialName; // 0x1410(0x8)
		USocialNameTextBlock Text_SocialName_Hover; // 0x1418(0x8)
		UCommonRichTextBlock Text_RichPresence; // 0x1420(0x8)
		UCommonRichTextBlock Text_RichPresence_Hover; // 0x1428(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialListUserEntryBase");
			return ret;
		}
	};


	// Class SocialUMG.SocialUserListHeaderEntry
	// Inherited from USocialListEntryBase -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1410 - 0x13F8)
	class USocialUserListHeaderEntry : public USocialListEntryBase	
	{
	public:
		UTextBlock Text_ListName; // 0x13F8(0x8)
		UTextBlock Text_NumEntries; // 0x1400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialUserListHeaderEntry");
			return ret;
		}
	};


	// Class SocialUMG.SocialUserListViewBase
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x398 - 0x288)
	class USocialUserListViewBase : public UListViewBase	
	{
	public:
		unsigned char UnknownData02_3[0x108]; // 0x288(0x108) UNKNOWN PROPERTY
		float EntrySpacing; // 0x390(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x394(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialUserListViewBase");
			return ret;
		}
	};


	// Class SocialUMG.SocialUserListView
	// Inherited from USocialUserListViewBase -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x438 - 0x398)
	class USocialUserListView : public USocialUserListViewBase	
	{
	public:
		unsigned char UnknownData01_3[0x48]; // 0x398(0x48) UNKNOWN PROPERTY
		USocialActionMenu ActiveActionMenu; // 0x3E0(0x8)
		TMap CachedActionMenuPool; // 0x3E8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialUserListView");
			return ret;
		}
	};


	// Class SocialUMG.SocialUserTreeView
	// Inherited from USocialUserListView -> USocialUserListViewBase -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x4D8 - 0x438)
	class USocialUserTreeView : public USocialUserListView	
	{
	public:
		unsigned char UnknownData02_3[0x70]; // 0x438(0x70) UNKNOWN PROPERTY
		UClass UserEntryWidgetClass; // 0x4A8(0x8)
		UClass InviteEntryWidgetClass; // 0x4B0(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x4B8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialUserTreeView");
			return ret;
		}
	};


	// Class SocialUMG.SocialChatEditableText
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x5D0 (0x730 - 0x160)
	class USocialChatEditableText : public UWidget	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x160(0x20) UNKNOWN PROPERTY
		FEditableTextStyle EditableTextStyle; // 0x180(0x290)
		FTextBlockStyle AutoCompleteStyle; // 0x410(0x2E0)
		unsigned char UnknownData03_7[0x40]; // 0x6F0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatEditableText");
			return ret;
		}
	};

}
