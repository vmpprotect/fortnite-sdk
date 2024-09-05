#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CompeteUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CompeteUI.FortTournamentViewVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x80 (0xE8 - 0x68)
	class UFortTournamentViewVM : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		FText TournamentName; // 0x70(0x10)
		FText TournamentDescription; // 0x80(0x10)
		FText EventTimeText; // 0x90(0x10)
		EFortCompeteExperienceType TournamentExperienceType; // 0xA0(0x1)
		EFortCompeteMatchType TournamentMatchType; // 0xA1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xA2(0x6) UNKNOWN PROPERTY
		FText RegionName; // 0xA8(0x10)
		UTexture2D TournamentTexture; // 0xB8(0x8)
		TArray ScoringRules; // 0xC0(0x10)
		TArray EventWindowsList; // 0xD0(0x10)
		bool bPlayerMeetsRequirement; // 0xE0(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		int32_t MinRankLevelRequirement; // 0xE4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CompeteUI.FortTournamentViewVM");
			return ret;
		}

		void SetupViewModel(FString TournamentId, FString CurrentEventId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5D038
	};


	// Class CompeteUI.FortCompeteUIManager
	// Inherited from UObject
	// Size: 0x3C8 (0x3F0 - 0x28)
	class UFortCompeteUIManager : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x3C8]; // 0x28(0x3C8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CompeteUI.FortCompeteUIManager");
			return ret;
		}
	};


	// Class CompeteUI.FortTournamentDetailsModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x408 - 0x3F8)
	class UFortTournamentDetailsModal : public UCommonActivatableWidget	
	{
	public:
		UFortTournamentDetailsScreen TournamentDetailsScreen; // 0x3F8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x400(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CompeteUI.FortTournamentDetailsModal");
			return ret;
		}
	};


	// Class CompeteUI.FortTournamentDetailsScreen
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortTournamentDetailsScreen : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CompeteUI.FortTournamentDetailsScreen");
			return ret;
		}
	};


	// Class CompeteUI.FortUIGameFeatureAction_CompeteUI
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortUIGameFeatureAction_CompeteUI : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr TournamentDetailsScreenClass; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CompeteUI.FortUIGameFeatureAction_CompeteUI");
			return ret;
		}
	};

}
