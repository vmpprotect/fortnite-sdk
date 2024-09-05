#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoFrontendUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoFrontendUI.JunoFrontendExperienceFlow
	// Inherited from UObject
	// Size: 0xE0 (0x108 - 0x28)
	class UJunoFrontendExperienceFlow : public UObject	
	{
	public:
		unsigned char UnknownData04_3[0x38]; // 0x28(0x38) UNKNOWN PROPERTY
		TWeakObjectPtr VideoPlayerClass; // 0x60(0x20)
		TArray FlowStepArray; // 0x80(0x10)
		bool bEnableTrailer; // 0x90(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FString CinematicTrailerVUID; // 0x98(0x10)
		FName CinematicTrailerString; // 0xA8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TMap CinematicTrailerRating; // 0xB0(0x50)
		unsigned char UnknownData07_7[0x8]; // 0x100(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFrontendUI.JunoFrontendExperienceFlow");
			return ret;
		}

		void HandleTrailerTerminalError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Private 0x7FF414E036E0
		void HandleFinishTrailerStep(); // Flags: Final|Native|Private 0x7FF414E03600
	};


	// Class JunoFrontendUI.MatchmakingWidgetErrorVisualsForJuno
	// Inherited from UMatchmakingWidgetErrorVisualsContainer -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UMatchmakingWidgetErrorVisualsForJuno : public UMatchmakingWidgetErrorVisualsContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFrontendUI.MatchmakingWidgetErrorVisualsForJuno");
			return ret;
		}
	};


	// Class JunoFrontendUI.JunoMatchmakingUtilityExtension
	// Inherited from UMatchmakingUtilityExtensionBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoMatchmakingUtilityExtension : public UMatchmakingUtilityExtensionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFrontendUI.JunoMatchmakingUtilityExtension");
			return ret;
		}
	};


	// Class JunoFrontendUI.JunoMatchmakingWidgetExtension
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UJunoMatchmakingWidgetExtension : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UClass GameSelectionOverride; // 0x30(0x8)
		UClass CustomHeadingWidget; // 0x38(0x8)
		bool bDisplayGameSelectionOnContentStack; // 0x40(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFrontendUI.JunoMatchmakingWidgetExtension");
			return ret;
		}
	};


	// Class JunoFrontendUI.JunoTabGroupButtonViewModel
	// Inherited from UUIKitTabGroupButtonViewModel -> UUIKitSelectableButtonViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UJunoTabGroupButtonViewModel : public UUIKitTabGroupButtonViewModel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFrontendUI.JunoTabGroupButtonViewModel");
			return ret;
		}
	};


	// Class JunoFrontendUI.JunoWorldManagementViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0xE0 (0x148 - 0x68)
	class UJunoWorldManagementViewModel : public UMVVMViewModelBase	
	{
	public:
		bool bAllowWorldCreation; // 0x68(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		int32_t MaxWorldSlots; // 0x6C(0x4)
		bool bAllowWorldUGCCreation; // 0x70(0x1)
		bool bForceShowDefaultWorldName; // 0x71(0x1)
		bool bIsModeratorModeEnabled; // 0x72(0x1)
		bool bWorldLoadingSuccess; // 0x73(0x1)
		bool bIsInCabinMode; // 0x74(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		TArray OwnerWorlds; // 0x78(0x10)
		TArray SharedWorlds; // 0x88(0x10)
		TArray WorldSlots; // 0x98(0x10)
		UJunoWorldDataViewModel SelectedWorld; // 0xA8(0x8)
		UJunoWorldDataViewModel EmptyWorld; // 0xB0(0x8)
		unsigned char UnknownData06_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		float DataRefreshFrequency; // 0xD0(0x4)
		unsigned char UnknownData07_6[0x54]; // 0xD4(0x54) UNKNOWN PROPERTY
		UDataTable SettingDataTable; // 0x128(0x8)
		TArray WorldImageList; // 0x130(0x10)
		UJunoWorldDataViewModel InitWorldManagementVM; // 0x140(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoFrontendUI.JunoWorldManagementViewModel");
			return ret;
		}

		void StartMatchmakingInModeratorMode(FString InWorldId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E03D00
		void RemoveSelectedWorldFromList(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E03C20
		UJunoWorldDataViewModel InitWorldData(TWeakObjectPtr& InSettingDataTable, TWeakObjectPtr& InWorldImageDataTable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E03B40
		bool GetIsCreateFlowSelected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E03A60
		void FetchWorldData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E03980
		void EnableDataRefresh(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E038A0
		void DisableDataRefresh(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E037C0
	};

}
