#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AccoladeCollectionScreen
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AccoladeCollectionScreen.FortAccoladeStageListEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UFortAccoladeStageListEntry : public UCommonUserWidget	
	{
	public:
		UAthenaChallengeRewards* UserWidget_Rewards; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortAccoladeStageListEntry");
			return ret;
		}

		void BP_PopulateAchievedCount(int32_t AchievedCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AccoladeCollectionScreen.PinnedAccoladeWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x328 - 0x318)
	class UPinnedAccoladeWidget : public UFortHUDElementWidget	
	{
	public:
		UFortLazyImage* LazyImage_PinColor; // 0x318(0x8)
		int32_t NumAllowedDescCharacters; // 0x320(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x324(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.PinnedAccoladeWidget");
			return ret;
		}

		void BP_PopulateAccoladeInfo(FText& Description, int32_t Achieved, int32_t Total); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AccoladeCollectionScreen.FortCollectionDataEntryAccolade
	// Inherited from UFortCollectionDataEntry -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortCollectionDataEntryAccolade : public UFortCollectionDataEntry	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortCollectionDataEntryAccolade");
			return ret;
		}
	};


	// Class AccoladeCollectionScreen.FortPlayerAccoladeCollectionListEntry
	// Inherited from UAthenaCollectionListEntry -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1480 - 0x1470)
	class UFortPlayerAccoladeCollectionListEntry : public UAthenaCollectionListEntry	
	{
	public:
		UImage* Image_Background; // 0x1470(0x8)
		FName ParamName_ItemIcon; // 0x1478(0x4)
		FName ParamName_IsDiscovered; // 0x147C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortPlayerAccoladeCollectionListEntry");
			return ret;
		}

		void BP_UpdateCompletedCount(int32_t CompletedCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_UpdateAccoladeTier(EFortAccoladeTierType Tier); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelectionSuppressionChanged(bool bShouldBeSuppressed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPinnedChanged(bool bPinned); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreen
	// Inherited from UAthenaCollectionScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x6C0 - 0x638)
	class UFortPlayerAccoladeCollectionScreen : public UAthenaCollectionScreenBase	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x638(0x30) UNKNOWN PROPERTY
		FScalableFloat AccoladesEnabledViaHotfix; // 0x668(0x28)
		UCommonTextBlock* Text_CategoryTitle; // 0x690(0x8)
		UCommonButtonBase* Button_ClearBangs; // 0x698(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x6A0(0x18) UNKNOWN PROPERTY
		bool bUserProgressSuccessfullyRetrieved; // 0x6B8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x6B9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreen");
			return ret;
		}
	};


	// Class AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreenContainer
	// Inherited from UAthenaCollectionScreenContainer -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x540 - 0x528)
	class UFortPlayerAccoladeCollectionScreenContainer : public UAthenaCollectionScreenContainer	
	{
	public:
		UAccoladeProductData* BRProductData; // 0x528(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x530(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreenContainer");
			return ret;
		}

		void BP_PopulateProgress(int32_t Current, int32_t Total); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreenInfoOverlay
	// Inherited from UAthenaCollectionScreenInfoOverlay -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x4B8 - 0x4A8)
	class UFortPlayerAccoladeCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay	
	{
	public:
		UFortCTAButton* Button_TrackAccolade; // 0x4A8(0x8)
		UFortAccoladeStageListEntry* Widget_AccoladeGoal; // 0x4B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreenInfoOverlay");
			return ret;
		}

		void BP_UpdateTrackButtonText(bool bTracked); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_UpdateAccoladeTier(EFortAccoladeTierType Tier); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_PopulateProductCompatibility(bool bIsCurrentlyCompatible, FGameplayTagQuery& ProductCompatibilityQuery); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_PopulateAccoladeInfo(int32_t CompletionCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
