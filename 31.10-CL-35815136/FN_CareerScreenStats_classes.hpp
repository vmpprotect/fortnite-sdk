#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CareerScreenStats
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Career/CareerScreenStats.CareerScreenStats_C
	// Inherited from UAthenaCareerStatsScreen -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x109 (0x6C1 - 0x5B8)
	class UCareerScreenStats_C : public UAthenaCareerStatsScreen	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x5B8(0x8)
		UWidgetAnimation* FinishedLoading; // 0x5C0(0x8)
		UCommonAnimatedSwitcher* CommonAnimatedSwitcher_ProgressInfo; // 0x5C8(0x8)
		UHorizontalBox* HB_AccountLevel; // 0x5D0(0x8)
		UImage* Image_Background; // 0x5D8(0x8)
		UCommonBorder* NoDataBox; // 0x5E0(0x8)
		UImage* ProgressSpinner; // 0x5E8(0x8)
		USizeBox* SB_Rank; // 0x5F0(0x8)
		UWidgetSwitcher* Switcher_Content; // 0x5F8(0x8)
		UCommonTextBlock* Tier_Name; // 0x600(0x8)
		UCommonTextBlock* Tier_Name; // 0x608(0x8)
		UCommonTextBlock* Tier_Name; // 0x610(0x8)
		UCommonTextBlock* Tier_Name; // 0x618(0x8)
		UCommonTextBlock* Tier_Name; // 0x620(0x8)
		UCommonTextBlock* Tier_Name; // 0x628(0x8)
		UCommonTextBlock* Tier_Name; // 0x630(0x8)
		USpacer* TopBarLeftSpacer; // 0x638(0x8)
		UVerticalBox* VerticalBox_RankedProgressInfo; // 0x640(0x8)
		UW_SurvivorTierBadge_C* W_SurvivorTierBadge; // 0x648(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x650(0x8)
		UWBP_LevelCountStats_C* WBP_LevelCountStats; // 0x658(0x8)
		UWBP_StatsOptionsDisplay_C* WBP_StatsOptionsDisplay; // 0x660(0x8)
		UWBP_StatsRow_C* WBP_StatsRow; // 0x668(0x8)
		UWBP_StatsRow_C* WBP_StatsRow; // 0x670(0x8)
		FDataTableRowHandle Input_ReplayCinematic; // 0x678(0x10)
		bool AutoPlayVideo; // 0x688(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x689(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle Input_Replays; // 0x690(0x10)
		UWBP_StatsOptionsModal_C* OptionsModal; // 0x6A0(0x8)
		bool InitializedRanksData; // 0x6A8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x6A9(0x7) UNKNOWN PROPERTY
		USoundBase* WhooshTileSound; // 0x6B0(0x8)
		USoundBase* TabWhooshSound; // 0x6B8(0x8)
		bool HandledRanksLoaded; // 0x6C0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/CareerScreenStats.CareerScreenStats_C");
			return ret;
		}

		void InitializeReplayButtonsInputHandlers(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateOptionsModalIfNecessary(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Refresh Survivor Tier Badge Label(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRankedScreenState(FStatPageData& StatPageData); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlockTemplateByPartySize(FStatPageData& StatPageData); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStatsData(FStatPageData& StatPageData); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRankedData(FStatPageData& StatPageData); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateOptionsModal(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEmptyDataScreenState(bool IsEmpty); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplySelectedOptionsFromModal(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleReplaysButtonClicked(bool& bPassThrough); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBackgroundFromSeason(FString SeasonName); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateScreen(FStatPageData& StatPageData, bool Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLoadingState(bool IsLoading); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReplayCinematic(bool& Passthrough); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayCinematic(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CareerScreen_WBP_StatsOptionsDisplay_K2Node_ComponentBoundEvent_0_OnRequestedOptions__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRanksLoaded(bool bSuccess); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleStatsLoaded(bool bSuccess); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CareerScreenStats(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
