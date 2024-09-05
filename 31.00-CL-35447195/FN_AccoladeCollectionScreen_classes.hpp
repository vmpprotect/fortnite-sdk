#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AccoladeCollectionScreen
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AccoladeCollectionScreen.FortAccoladeStageListEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UFortAccoladeStageListEntry : public UCommonUserWidget	
	{
	public:
		UAthenaChallengeRewards UserWidget_Rewards; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortAccoladeStageListEntry");
			return ret;
		}

		void BP_PopulateAchievedCount(int32_t AchievedCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA8898
	};


	// Class AccoladeCollectionScreen.PinnedAccoladeWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x330 - 0x320)
	class UPinnedAccoladeWidget : public UFortHUDElementWidget	
	{
	public:
		UFortLazyImage LazyImage_PinColor; // 0x320(0x8)
		int32_t NumAllowedDescCharacters; // 0x328(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.PinnedAccoladeWidget");
			return ret;
		}

		void BP_PopulateAccoladeInfo(FText& Description, int32_t Achieved, int32_t Total); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BA8978
	};


	// Class AccoladeCollectionScreen.FortCollectionDataEntryAccolade
	// Inherited from UFortCollectionDataEntry -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortCollectionDataEntryAccolade : public UFortCollectionDataEntry	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

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
		UImage Image_Background; // 0x1470(0x8)
		FName ParamName_ItemIcon; // 0x1478(0x4)
		FName ParamName_IsDiscovered; // 0x147C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortPlayerAccoladeCollectionListEntry");
			return ret;
		}

		void BP_UpdateCompletedCount(int32_t CompletedCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA8CF8
		void BP_UpdateAccoladeTier(EFortAccoladeTierType Tier); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA8C18
		void BP_OnSelectionSuppressionChanged(bool bShouldBeSuppressed); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA8B38
		void BP_OnPinnedChanged(bool bPinned); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA8A58
	};


	// Class AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreen
	// Inherited from UAthenaCollectionScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x6C8 - 0x640)
	class UFortPlayerAccoladeCollectionScreen : public UAthenaCollectionScreenBase	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x640(0x30) UNKNOWN PROPERTY
		FScalableFloat AccoladesEnabledViaHotfix; // 0x670(0x28)
		UCommonTextBlock Text_CategoryTitle; // 0x698(0x8)
		UCommonButtonBase Button_ClearBangs; // 0x6A0(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x6A8(0x18) UNKNOWN PROPERTY
		bool bUserProgressSuccessfullyRetrieved; // 0x6C0(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x6C1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreen");
			return ret;
		}
	};


	// Class AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreenContainer
	// Inherited from UAthenaCollectionScreenContainer -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x548 - 0x530)
	class UFortPlayerAccoladeCollectionScreenContainer : public UAthenaCollectionScreenContainer	
	{
	public:
		UAccoladeProductData BRProductData; // 0x530(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x538(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreenContainer");
			return ret;
		}

		void BP_PopulateProgress(int32_t Current, int32_t Total); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA8DD8
	};


	// Class AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreenInfoOverlay
	// Inherited from UAthenaCollectionScreenInfoOverlay -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x4C0 - 0x4B0)
	class UFortPlayerAccoladeCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay	
	{
	public:
		UFortCTAButton Button_TrackAccolade; // 0x4B0(0x8)
		UFortAccoladeStageListEntry Widget_AccoladeGoal; // 0x4B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladeCollectionScreen.FortPlayerAccoladeCollectionScreenInfoOverlay");
			return ret;
		}

		void BP_UpdateTrackButtonText(bool bTracked); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA9158
		void BP_UpdateAccoladeTier(EFortAccoladeTierType Tier); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA9078
		void BP_PopulateProductCompatibility(bool bIsCurrentlyCompatible, FGameplayTagQuery& ProductCompatibilityQuery); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BA8F98
		void BP_PopulateAccoladeInfo(int32_t CompletionCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414BA8EB8
	};

}
