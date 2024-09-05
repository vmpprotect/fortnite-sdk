#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TournamentDetails
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Compete/TournamentDetails/WBP_TournamentDetailsSectionSlot.WBP_TournamentDetailsSectionSlot_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2E0 - 0x2B8)
	class UWBP_TournamentDetailsSectionSlot_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCommonTextBlock CommonTextBlock; // 0x2C0(0x8)
		UNamedSlot NamedSlot; // 0x2C8(0x8)
		FText Title; // 0x2D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Compete/TournamentDetails/WBP_TournamentDetailsSectionSlot.WBP_TournamentDetailsSectionSlot_C");
			return ret;
		}

		void SetupText(FText& InText); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5ACEC300
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACEC400
		void ExecuteUbergraph_WBP_TournamentDetailsSectionSlot(int32_t EntryPoint); // Flags: Final 0x15D5ACEC500
	};


	// Class /Compete/TournamentDetails/WBP_TournamentPrize_Header.WBP_TournamentPrize_Header_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x328 - 0x2E0)
	class UWBP_TournamentPrize_Header_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
		UCommonRichTextBlock CommonRichText_Header; // 0x2E8(0x8)
		UNamedSlot NamedSlot_Rewards; // 0x2F0(0x8)
		UCommonTextBlock Text_SubHeader; // 0x2F8(0x8)
		bool Show_Sub_Heading_; // 0x300(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x301(0x7) UNKNOWN PROPERTY
		FString HeaderText; // 0x308(0x10)
		FText SubHeaderText; // 0x318(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Compete/TournamentDetails/WBP_TournamentPrize_Header.WBP_TournamentPrize_Header_C");
			return ret;
		}

		void SetSubHeader(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5ACE2100
		void SetHeader(FString Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5ACE2000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5ACE2800
		void ExecuteUbergraph_WBP_TournamentPrize_Header(int32_t EntryPoint); // Flags: Final 0x15D5ACEBE00
	};


	// Class /Compete/TournamentDetails/WBP_TournamentDetailsHeader.WBP_TournamentDetailsHeader_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x318 - 0x2E0)
	class UWBP_TournamentDetailsHeader_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
		UVM_WatchLiveModalDebug_C VM_WatchLiveModalDebug; // 0x2E8(0x8)
		UCommonTextBlock DateAndTime; // 0x2F0(0x8)
		UCommonTextBlock round; // 0x2F8(0x8)
		UCommonTextBlock TournamentName; // 0x300(0x8)
		UWBP_UIKit_Tag_C TournamentTag; // 0x308(0x8)
		UWBP_UIKit_Highlight_C WBP_UIKit_Highlight; // 0x310(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Compete/TournamentDetails/WBP_TournamentDetailsHeader.WBP_TournamentDetailsHeader_C");
			return ret;
		}

		void SetVM_WatchLiveModalDebug(UVM_WatchLiveModalDebug_C ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D41FA5D00
		void SetTournamentTagIconMaterial(UMaterialInstance Icon); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA8200
		void SetTagTeamType(TEnumAsByte TeamType); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41FA3300
		void SetTagBattleType(FText BattleType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FAB600
		void SetTournamentName(FText TournamentName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA5E00
		void SetRoundDateTimeInfo(FText DateTimeInfo); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA2500
		void SetRoundInfo(FText RoundName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA8000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D41FA4E00
		void ExecuteUbergraph_WBP_TournamentDetailsHeader(int32_t EntryPoint); // Flags: Final 0x15D41FA4300
	};


	// Class /Compete/TournamentDetails/WBP_TournamentDetails.WBP_TournamentDetails_C
	// Inherited from UFortTournamentDetailsScreen -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x368 - 0x2F0)
	class UWBP_TournamentDetails_C : public UFortTournamentDetailsScreen	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2F0(0x8)
		UImage Background_Image; // 0x2F8(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C ContextMenu; // 0x300(0x8)
		UWBP_TournamentDetailsSectionSlot_C DetailsSection; // 0x308(0x8)
		UWBP_UIKit_Button_Regular_C Leaderboard_Button; // 0x310(0x8)
		USafeZone SafeZone; // 0x318(0x8)
		UWBP_TournamentDetailsSectionSlot_C ScoringSection; // 0x320(0x8)
		UWBP_UIKit_Button_Loud_C SignUp_Button; // 0x328(0x8)
		UFortSwipePanel SwipePanel; // 0x330(0x8)
		UWBP_TournamentPrize_Header_C TournamentPrize; // 0x338(0x8)
		UWBP_TournamentDetailsHeader_C WBP_TournamentDetailsHeader; // 0x340(0x8)
		UTexture BackgroundImage; // 0x348(0x8)
		FLinearColor BackgroundColor; // 0x350(0x10)
		UUIKitContextMenuActionContext ContextMenuActionContext; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Compete/TournamentDetails/WBP_TournamentDetails.WBP_TournamentDetails_C");
			return ret;
		}

		void OnContextClicked(FName InteractionNameID); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA2E00
		void GenerateContextMenu(TArray& Context); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41FA2D00
		void SetBackgroundColor(FLinearColor Value); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA6200
		void SetBackgroundImage(UTexture Value); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D41FA2200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D41FA3100
		void ExecuteUbergraph_WBP_TournamentDetails(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D41FA3400
	};


	// Class /Compete/TournamentDetails/WBP_TournamentDetailsModal.WBP_TournamentDetailsModal_C
	// Inherited from UFortTournamentDetailsModal -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x408 - 0x408)
	class UWBP_TournamentDetailsModal_C : public UFortTournamentDetailsModal	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Compete/TournamentDetails/WBP_TournamentDetailsModal.WBP_TournamentDetailsModal_C");
			return ret;
		}
	};

}
