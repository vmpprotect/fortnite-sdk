#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CrewUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CrewUI.CrewSubscriptionContentTabData
	// Size: 0x18 (0x18 - 0x0)
	struct FCrewSubscriptionContentTabData	
	{
	public:
		FText TabName; // 0x0(0x10)
		ESubscriptionContentTab TabType; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct CrewUI.FortProgressiveReward
	// Size: 0x58 (0x58 - 0x0)
	struct FFortProgressiveReward	
	{
	public:
		TArray<FCosmeticVariantInfo> DefaultVariantPreviewOverrides; // 0x0(0x10)
		TWeakObjectPtr<UMaterialInterface*> TileMaterial; // 0x10(0x20)
		bool bHidden; // 0x30(0x1)
		bool bAllowPreviewStyles; // 0x31(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortItemDefinition*> RewardDef; // 0x38(0x20)
	};


	// Struct CrewUI.FortProgressiveStageOverrideDisplayData
	// Size: 0x48 (0x48 - 0x0)
	struct FFortProgressiveStageOverrideDisplayData	
	{
	public:
		TArray<FCosmeticVariantInfo> DefaultVariantPreviewOverrides; // 0x0(0x10)
		FText DisplayName; // 0x10(0x10)
		TWeakObjectPtr<UMaterialInterface*> TileMaterial; // 0x20(0x20)
		bool bAllowPreviewStyles; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct CrewUI.FortProgressiveUIStage
	// Size: 0x60 (0x60 - 0x0)
	struct FFortProgressiveUIStage	
	{
	public:
		TArray<FFortProgressiveReward> Rewards; // 0x0(0x10)
		bool bUseOverrideDisplayData; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FFortProgressiveStageOverrideDisplayData OverrideDisplayData; // 0x18(0x48)
	};


	// Struct CrewUI.FortProgressiveSet
	// Size: 0x50 (0x50 - 0x0)
	struct FFortProgressiveSet	
	{
	public:
		FString FulfillmentId; // 0x0(0x10)
		FText SetName; // 0x10(0x10)
		TWeakObjectPtr<UMaterialInterface*> TileMaterial; // 0x20(0x20)
		TArray<FFortProgressiveUIStage> Stages; // 0x40(0x10)
	};


	// Struct CrewUI.FortProgressiveSetRewardData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortProgressiveSetRewardData	
	{
	public:
		UFortItemDefinition* RewardToken; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};

}
