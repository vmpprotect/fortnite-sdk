#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EventScreenBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EventScreenBase.EventItemOverride
	// Size: 0x68 (0x68 - 0x0)
	struct FEventItemOverride	
	{
	public:
		TWeakObjectPtr ItemDefinition; // 0x0(0x20)
		TWeakObjectPtr CustomItemTexture; // 0x20(0x20)
		TWeakObjectPtr CustomItemTextureMobile; // 0x40(0x20)
		bool bIsDoubleWidth; // 0x60(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct EventScreenBase.EventScreenTrackData
	// Size: 0x30 (0x30 - 0x0)
	struct FEventScreenTrackData	
	{
	public:
		FLinearColor TrackColorPrimary; // 0x0(0x10)
		FLinearColor TrackColorSecondary; // 0x10(0x10)
		FLinearColor TrackColorTertiary; // 0x20(0x10)
	};


	// Struct EventScreenBase.EventScreenMoreInfoGroup
	// Size: 0x40 (0x40 - 0x0)
	struct FEventScreenMoreInfoGroup	
	{
	public:
		FText Header; // 0x0(0x10)
		FText Body; // 0x10(0x10)
		TWeakObjectPtr Icon; // 0x20(0x20)
	};


	// Struct EventScreenBase.EventScreenCMSMoreInfoGroup
	// Size: 0x30 (0x30 - 0x0)
	struct FEventScreenCMSMoreInfoGroup	
	{
	public:
		FText Header; // 0x0(0x10)
		FText Body; // 0x10(0x10)
		FString IconURL; // 0x20(0x10)
	};


	// Struct EventScreenBase.EventScreenCMSResourceGroupOverride
	// Size: 0x18 (0x18 - 0x0)
	struct FEventScreenCMSResourceGroupOverride	
	{
	public:
		int32_t ResourceValue; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString KeyArtOverrideURL; // 0x8(0x10)
	};


	// Struct EventScreenBase.EventScreenCMSData
	// Size: 0x200 (0x200 - 0x0)
	struct FEventScreenCMSData	
	{
	public:
		FString EventCMSId; // 0x0(0x10)
		FText EventName; // 0x10(0x10)
		FText EventDescription; // 0x20(0x10)
		FText ResourceHeader; // 0x30(0x10)
		FText StarterHeader; // 0x40(0x10)
		FText CompletionHeader; // 0x50(0x10)
		FText EventCTA; // 0x60(0x10)
		FText EventCTACompleted; // 0x70(0x10)
		FText HeaderCTA; // 0x80(0x10)
		FText ItemShopCallout; // 0x90(0x10)
		FString CTAIconURL; // 0xA0(0x10)
		FString KeyArtURL; // 0xB0(0x10)
		FText MoreInfoHeader; // 0xC0(0x10)
		FText MoreInfoSubHeader; // 0xD0(0x10)
		FString MoreInfoKeyArtURL; // 0xE0(0x10)
		FText MoreInfoLegal; // 0xF0(0x10)
		TArray MoreInfoGroups; // 0x100(0x10)
		FText PurchaseLegal; // 0x110(0x10)
		FText RewardTrackLegal; // 0x120(0x10)
		FString ItemShopOfferId; // 0x130(0x10)
		FText PremiumUpsellUnownedHeader; // 0x140(0x10)
		FText PremiumUpsellUnownedBody; // 0x150(0x10)
		FText PremiumUpsellOwnedHeader; // 0x160(0x10)
		FText PremiumUpsellOwnedBody; // 0x170(0x10)
		FString PremiumUpsellIconURL; // 0x180(0x10)
		FText PurchasePremiumTrackHeader; // 0x190(0x10)
		TArray PurchasePremiumTrackBodyList; // 0x1A0(0x10)
		FText InspectSpecialItemUnowned; // 0x1B0(0x10)
		FText InspectSpecialItemOwned; // 0x1C0(0x10)
		FText InspectSpecialPremiumItemUnowned; // 0x1D0(0x10)
		FText InspectSpecialPremiumItemOwned; // 0x1E0(0x10)
		TArray ResourceGroupOverrides; // 0x1F0(0x10)
	};


	// Struct EventScreenBase.EventScreenCMSGroup
	// Size: 0x50 (0x50 - 0x0)
	struct FEventScreenCMSGroup	
	{
	public:
		TMap EventScreens; // 0x0(0x50)
	};

}
