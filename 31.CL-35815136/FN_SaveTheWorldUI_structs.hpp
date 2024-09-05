#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SaveTheWorldUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SaveTheWorldUI.SquadSlotSortTypes
	// Size: 0x10 (0x10 - 0x0)
	struct FSquadSlotSortTypes	
	{
	public:
		TArray<ESquadSlotSortType> SortTypes; // 0x0(0x10)
	};


	// Struct SaveTheWorldUI.ExpeditionTabInfo
	// Size: 0x100 (0x100 - 0x0)
	struct FExpeditionTabInfo	
	{
	public:
		FName TabNameID; // 0x0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabLabelInfo; // 0x10(0xF0)
	};


	// Struct SaveTheWorldUI.ConsumedCriteriaData
	// Size: 0x18 (0x18 - 0x0)
	struct FConsumedCriteriaData	
	{
	public:
		float PowerMod; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FName> CriteriaNames; // 0x8(0x10)
	};


	// Struct SaveTheWorldUI.FortInGamePerkDisplayData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortInGamePerkDisplayData	
	{
	public:
		EFortHeroPerkDisplayType PerkDisplayType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Index; // 0x4(0x4)
		int32_t Row; // 0x8(0x4)
		int32_t Column; // 0xC(0x4)
	};


	// Struct SaveTheWorldUI.FortRefundDescriptionsData
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FFortRefundDescriptionsData : public FTableRowBase	
	{
	public:
		FString SearchString; // 0x8(0x10)
		FString TargetReleaseVersion; // 0x18(0x10)
		FText RefundDescriptionText; // 0x28(0x10)
	};


	// Struct SaveTheWorldUI.FortQuestMapEventQuestSideBarData
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FFortQuestMapEventQuestSideBarData : public FTableRowBase	
	{
	public:
		UFortQuestItemDefinition* QuestItemDefinition; // 0x8(0x8)
		TArray<FString> EventFlags; // 0x10(0x10)
		bool bShowAlways; // 0x20(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float CycleTime; // 0x24(0x4)
	};


	// Struct SaveTheWorldUI.FortLandingPageDefenderSummaryInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FFortLandingPageDefenderSummaryInfo	
	{
	public:
		FName SquadID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText TheaterDisplayName; // 0x8(0x10)
		FString TheaterUniqueId; // 0x18(0x10)
	};


	// Struct SaveTheWorldUI.FortAttributeModifierAccumulation
	// Size: 0x48 (0x48 - 0x0)
	struct FFortAttributeModifierAccumulation	
	{
	public:
		FGameplayTag GameplayTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FGameplayAttribute Attribute; // 0x8(0x38)
		TEnumAsByte<EGameplayModOp> ModifierOp; // 0x40(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float Magnitude; // 0x44(0x4)
	};


	// Struct SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
	// Size: 0xB0 (0xB0 - 0x0)
	struct FFortSurvivorSquadSlottingFeedbackData	
	{
	public:
		bool HadLeaderMatch; // 0x0(0x1)
		bool HasLeaderMatch; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TMap<FGameplayTag, int32_t> PreviousSetBonusCounts; // 0x8(0x50)
		TMap<FGameplayTag, int32_t> CurrentSetBonusCounts; // 0x58(0x50)
		int32_t PreviousPersonalityMatchCount; // 0xA8(0x4)
		int32_t CurrentPersonalityMatchCount; // 0xAC(0x4)
	};


	// Struct SaveTheWorldUI.FortSurvivorSquadSelectorButtonSummaryStats
	// Size: 0x98 (0x98 - 0x0)
	struct FFortSurvivorSquadSelectorButtonSummaryStats	
	{
	public:
		FName SquadID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FGameplayAttribute FortAttribute; // 0x8(0x38)
		float FortAttributeValue; // 0x40(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FGameplayAttribute FortTeamAttribute; // 0x48(0x38)
		float TeamFortAttributeValue; // 0x80(0x4)
		float SquadPowerValue; // 0x84(0x4)
		FText FortAttributeName; // 0x88(0x10)
	};


	// Struct SaveTheWorldUI.FortSurvivorSquadSelectorButtonPersonalityMatches
	// Size: 0x430 (0x430 - 0x0)
	struct FFortSurvivorSquadSelectorButtonPersonalityMatches	
	{
	public:
		int32_t NumPersonalityMatches; // 0x0(0x4)
		int32_t TotalNonLeaderSquadMembers; // 0x4(0x4)
		bool HavePersonalityIcons; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FFortMultiSizeBrush PersonalityIcons; // 0x10(0x420)
	};


	// Struct SaveTheWorldUI.FortUISurvivorSquadStatMatch
	// Size: 0x450 (0x450 - 0x0)
	struct FFortUISurvivorSquadStatMatch	
	{
	public:
		FFortMultiSizeBrush Icons; // 0x0(0x420)
		FText MagnitudeText; // 0x420(0x10)
		FText AttributeDisplayName; // 0x430(0x10)
		int32_t NumMembersMeetingCriteria; // 0x440(0x4)
		int32_t NumMembersRequired; // 0x444(0x4)
		EFortUISurvivorSquadMatchType MatchType; // 0x448(0x1)
		EFortBuffState PreviewEffect; // 0x449(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x44A(0x6) UNKNOWN PROPERTY
	};


	// Struct SaveTheWorldUI.OfferGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FOfferGroup	
	{
	public:
		FString Name; // 0x0(0x10)
		int32_t MaxNumberToShow; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct SaveTheWorldUI.HomebaseNodeDisplayData
	// Inherited from FTableRowBase
	// Size: 0x68 (0x70 - 0x8)
	struct FHomebaseNodeDisplayData : public FTableRowBase	
	{
	public:
		FText Title; // 0x8(0x10)
		FText Description; // 0x18(0x10)
		TWeakObjectPtr<UTexture2D*> LargePreviewImage; // 0x28(0x20)
		TWeakObjectPtr<UTexture2D*> SmallPreviewImage; // 0x48(0x20)
		UMediaSource* PreviewVideoMediaSource; // 0x68(0x8)
	};

}
