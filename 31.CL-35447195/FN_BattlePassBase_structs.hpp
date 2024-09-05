#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BattlePassBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct BattlePassBase.BattlePassCharaterRewardTabInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FBattlePassCharaterRewardTabInfo	
	{
	public:
		TWeakObjectPtr TabIcon; // 0x0(0x20)
		int32_t TabCategoryCounter; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct BattlePassBase.BattlePassLandingPageButtonTexts
	// Size: 0x30 (0x30 - 0x0)
	struct FBattlePassLandingPageButtonTexts	
	{
	public:
		FText TileText; // 0x0(0x10)
		FText LandingPageTitleText; // 0x10(0x10)
		FText LandingPageDescriptionText; // 0x20(0x10)
	};


	// Struct BattlePassBase.BattlePassLandingPageButtonDisplayBehaviorData
	// Size: 0x18 (0x18 - 0x0)
	struct FBattlePassLandingPageButtonDisplayBehaviorData	
	{
	public:
		FBattlePassLandingPageButtonDisplayBehavior DisplayBehavior; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FTimespan BehaviorTimespan; // 0x8(0x8)
		bool bIsDisplayActive; // 0x10(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct BattlePassBase.BattlePassLandingPageButtonDisplayDetails
	// Size: 0x50 (0x50 - 0x0)
	struct FBattlePassLandingPageButtonDisplayDetails	
	{
	public:
		FBattlePassLandingPageButtonTexts ButtonTexts; // 0x0(0x30)
		bool bIsBPLocked; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FText MissingCosmeticNameText; // 0x38(0x10)
		FTimespan DelayTimespan; // 0x48(0x8)
	};


	// Struct BattlePassBase.BattlePassLandingPagePreviewItem
	// Size: 0x40 (0x40 - 0x0)
	struct FBattlePassLandingPagePreviewItem	
	{
	public:
		TWeakObjectPtr PreviewItem; // 0x0(0x20)
		TWeakObjectPtr BackBlingPreviewOverride; // 0x20(0x20)
	};


	// Struct BattlePassBase.BattlePassLandingPageEntryPreviewInfo
	// Size: 0x90 (0x90 - 0x0)
	struct FBattlePassLandingPageEntryPreviewInfo	
	{
	public:
		EBattlePassLandingPageSpecialEntryType SpecialEntryType; // 0x0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray SubscriptionItemTypesToDisplay; // 0x8(0x10)
		FGameplayTag SpecialCharacterVariantChannelToModify; // 0x18(0x4)
		FGameplayTag SpecialCharacterActiveVariantTag; // 0x1C(0x4)
		TMap TemplateIdTileRenderMap; // 0x20(0x50)
		TArray PreviewItems; // 0x70(0x10)
		bool bEnableDynamicWeeklyPreview; // 0x80(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		float TransitionTime; // 0x84(0x4)
		unsigned char UnknownData05_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct BattlePassBase.SeasonalResourceList
	// Size: 0x10 (0x10 - 0x0)
	struct FSeasonalResourceList	
	{
	public:
		TArray SeasonalResources; // 0x0(0x10)
	};

}
