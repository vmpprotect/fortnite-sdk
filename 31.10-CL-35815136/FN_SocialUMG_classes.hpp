#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SocialUMG
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SocialUMG.DesignerPreviewChatChannel
	// Inherited from USocialChatChannel -> UObject
	// Size: 0x60 (0x140 - 0xE0)
	class UDesignerPreviewChatChannel : public USocialChatChannel	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0xE0(0x60) UNKNOWN PROPERTY

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
		USocialChatChannel* ChatChannel; // 0x13E0(0x8)
		UCommonTextBlock* CommonText_ChannelName; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatChannelTab");
			return ret;
		}
	};


	// Class SocialUMG.SocialChatContainer
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x308 - 0x2B0)
	class USocialChatContainer : public UUserWidget	
	{
	public:
		USocialChatManager* ChatManager; // 0x2B0(0x8)
		TArray<USocialChatChannel*> JoinedChannels; // 0x2B8(0x10)
		USocialChatChannel* ActiveChannel; // 0x2C8(0x8)
		UCommonButtonGroupLegacy* TabButtonGroup; // 0x2D0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		USocialChatMessageList* ChatList_Messages; // 0x2E0(0x8)
		USocialChatEditableText* ChatEditableText_MessageEntry; // 0x2E8(0x8)
		UCommonButtonBase* Button_SendMessage; // 0x2F0(0x8)
		UDynamicEntryBox* EntryBox_JoinedChannels; // 0x2F8(0x8)
		UScrollBox* ScrollBox_Channels; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatContainer");
			return ret;
		}

		void SendCurrentMessage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FC07FF8(relative to base address)
		void OnChatOpenChanged(bool bShouldBeOpen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRightTabPressed(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FC07F70(relative to base address)
		void HandleLeftTabPressed(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FC07E54(relative to base address)
		void FocusEditableText(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FC07DA4(relative to base address)
		void DynamicHandleMessageTextCommitted(FText& MessageText, TEnumAsByte<ETextCommit> CommitMethod); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74FC07C90(relative to base address)
	};


	// Class SocialUMG.SocialChatMessageEntry
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x160 (0x410 - 0x2B0)
	class USocialChatMessageEntry : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x2B0(0x18) UNKNOWN PROPERTY
		FSocialChatMessageEntryStyle DefaultStyle; // 0x2C8(0x138)
		UCommonRichTextBlock* RichText_Message; // 0x400(0x8)
		UButton* Button_MessageButton; // 0x408(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatMessageEntry");
			return ret;
		}

		void OnMessageSet(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanInteract(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749859FE0(relative to base address)
	};


	// Class SocialUMG.SocialChatMessageList
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x398 - 0x280)
	class USocialChatMessageList : public UListViewBase	
	{
	public:
		unsigned char UnknownData00_3[0xE8]; // 0x280(0xE8) UNKNOWN PROPERTY
		bool bIsFocusable; // 0x368(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x369(0x7) UNKNOWN PROPERTY
		USocialChatChannel* ActiveChannel; // 0x370(0x8)
		unsigned char UnknownData02_7[0x20]; // 0x378(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UClass* ActionMenuClass; // 0x13E8(0x8)
		USocialGroupChannel* SocialGroup; // 0x13F0(0x8)
		UTextBlock* Text_GroupName; // 0x13F8(0x8)
		UMenuAnchor* MenuAnchor_Actions; // 0x1400(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x1408(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialGroupListEntry");
			return ret;
		}

		UUserWidget HandleGetMenuContent(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FC07E0C(relative to base address)
	};


	// Class SocialUMG.SocialGroupTreeView
	// Inherited from UTreeView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0xBB0 - 0xB88)
	class USocialGroupTreeView : public UTreeView	
	{
	public:
		UClass* GroupEntryWidgetClass; // 0xB88(0x8)
		UClass* UserEntryWidgetClass; // 0xB90(0x8)
		UClass* ActionMenuClass; // 0xB98(0x8)
		USocialInteractionMenu* ActionMenu; // 0xBA0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xBA8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x80]; // 0x1400(0x80) UNKNOWN PROPERTY
		UCommonTextBlock* Text_InteractionName; // 0x1480(0x8)
		UBorder* Border_InteractionIndicator; // 0x1488(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialInteractionButton");
			return ret;
		}

		void OnInteractionSet(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPlatformOnlyFriend(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC07F84(relative to base address)
		FName GetInteractionName(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC07DD8(relative to base address)
	};


	// Class SocialUMG.SocialActionMenu
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x430 - 0x3F0)
	class USocialActionMenu : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x3F0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialActionMenu");
			return ret;
		}

		void OnOpened(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMenuAnchorOpenChanged(bool bIsOpen); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FC07E68(relative to base address)
	};


	// Class SocialUMG.SocialInteractionMenu
	// Inherited from USocialActionMenu -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x498 - 0x430)
	class USocialInteractionMenu : public USocialActionMenu	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x430(0x30) UNKNOWN PROPERTY
		UDynamicEntryBox* EntryBox_PositiveInteractions; // 0x460(0x8)
		UDynamicEntryBox* EntryBox_NegativeInteractions; // 0x468(0x8)
		USpacer* Spacer_InteractionSeparator; // 0x470(0x8)
		UCommonWidgetSwitcherLegacy* Switcher_Confirmation; // 0x478(0x8)
		UTextBlock* Text_ConfirmationLabel; // 0x480(0x8)
		UCommonButtonLegacy* Button_Confirm; // 0x488(0x8)
		UCommonButtonLegacy* Button_Decline; // 0x490(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialInteractionMenu");
			return ret;
		}

		void OnToggleConfirmation(bool bIsVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget GetFirstEntryToCenter(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC07DB8(relative to base address)
	};


	// Class SocialUMG.SocialNameTextBlock
	// Inherited from UCommonRichTextBlock -> URichTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x7F0 - 0x7D0)
	class USocialNameTextBlock : public UCommonRichTextBlock	
	{
	public:
		USocialUser* SocialUser; // 0x7D0(0x8)
		float MinDesiredSize; // 0x7D8(0x4)
		float MaxDesiredSize; // 0x7DC(0x4)
		bool bShowSecondName; // 0x7E0(0x1)
		EPlatformIconDisplayRule PlatformIconDisplayRule; // 0x7E1(0x1)
		bool bWrapToNextLine; // 0x7E2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x7E3(0x1) UNKNOWN PROPERTY
		FColor SecondNameColor; // 0x7E4(0x4)
		int32_t SecondNameFontSize; // 0x7E8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7EC(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x18]; // 0x13E0(0x18) UNKNOWN PROPERTY

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
		UClass* ActionMenuClass; // 0x13F8(0x8)
		UMenuAnchor* MenuAnchor_Actions; // 0x1400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialListInteractableEntryBase");
			return ret;
		}

		void HandleMenuOpenChanged(bool bIsMenuOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FC07EEC(relative to base address)
		UUserWidget HandleGetMenuContent(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FC07E30(relative to base address)
	};


	// Class SocialUMG.SocialListUserEntryBase
	// Inherited from USocialListInteractableEntryBase -> USocialListEntryBase -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1430 - 0x1408)
	class USocialListUserEntryBase : public USocialListInteractableEntryBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1408(0x8) UNKNOWN PROPERTY
		USocialNameTextBlock* Text_SocialName; // 0x1410(0x8)
		USocialNameTextBlock* Text_SocialName_Hover; // 0x1418(0x8)
		UCommonRichTextBlock* Text_RichPresence; // 0x1420(0x8)
		UCommonRichTextBlock* Text_RichPresence_Hover; // 0x1428(0x8)

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
		UTextBlock* Text_ListName; // 0x13F8(0x8)
		UTextBlock* Text_NumEntries; // 0x1400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialUserListHeaderEntry");
			return ret;
		}
	};


	// Class SocialUMG.SocialUserListViewBase
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x390 - 0x280)
	class USocialUserListViewBase : public UListViewBase	
	{
	public:
		unsigned char UnknownData00_3[0x108]; // 0x280(0x108) UNKNOWN PROPERTY
		float EntrySpacing; // 0x388(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x38C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialUserListViewBase");
			return ret;
		}
	};


	// Class SocialUMG.SocialUserListView
	// Inherited from USocialUserListViewBase -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x430 - 0x390)
	class USocialUserListView : public USocialUserListViewBase	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x390(0x48) UNKNOWN PROPERTY
		USocialActionMenu* ActiveActionMenu; // 0x3D8(0x8)
		TMap<UClass*, USocialActionMenu*> CachedActionMenuPool; // 0x3E0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialUserListView");
			return ret;
		}
	};


	// Class SocialUMG.SocialUserTreeView
	// Inherited from USocialUserListView -> USocialUserListViewBase -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x4D0 - 0x430)
	class USocialUserTreeView : public USocialUserListView	
	{
	public:
		unsigned char UnknownData00_3[0x70]; // 0x430(0x70) UNKNOWN PROPERTY
		UClass* UserEntryWidgetClass; // 0x4A0(0x8)
		UClass* InviteEntryWidgetClass; // 0x4A8(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x4B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialUserTreeView");
			return ret;
		}
	};


	// Class SocialUMG.SocialChatEditableText
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x5C8 (0x720 - 0x158)
	class USocialChatEditableText : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x158(0x18) UNKNOWN PROPERTY
		FEditableTextStyle EditableTextStyle; // 0x170(0x290)
		FTextBlockStyle AutoCompleteStyle; // 0x400(0x2E0)
		unsigned char UnknownData01_7[0x40]; // 0x6E0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SocialUMG.SocialChatEditableText");
			return ret;
		}
	};

}
