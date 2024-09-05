#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicGameplayStatsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EpicGameplayStatsRuntime.TagTableManagerHelper
	// Size: 0x1 (0x1 - 0x0)
	struct FTagTableManagerHelper	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
	// Inherited from FTableRowBase
	// Size: 0x40 (0x48 - 0x8)
	struct FGameplayStatMetadataTableRow : public FTableRowBase	
	{
	public:
		FString BackendName; // 0x8(0x10)
		FText DisplayName; // 0x18(0x10)
		TArray<EEpicLeaderboardTimeWindow> Windows; // 0x28(0x10)
		EEpicLeaderboardUpdateFunction Metric; // 0x38(0x1)
		EEpicLeaderboardDataType DataType; // 0x39(0x1)
		bool bPublish; // 0x3A(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3B(0x1) UNKNOWN PROPERTY
		int32_t WeeklyRefreshInterval; // 0x3C(0x4)
		bool bExportToBackEnd; // 0x40(0x1)
		bool bShowInFrontEnd; // 0x41(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
	};


	// Struct EpicGameplayStatsRuntime.GameplayStatTag
	// Inherited from FGameplayTag
	// Size: 0x4 (0x8 - 0x4)
	struct FGameplayStatTag : public FGameplayTag	
	{
	public:
		FGameplayTag Tag; // 0x4(0x4)
	};


	// Struct EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
	// Size: 0x10 (0x10 - 0x0)
	struct FManagedGameplayTagDataTableItem	
	{
	public:
		FGameplayTag RootTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UDataTable* DataTable; // 0x8(0x8)
	};

}
