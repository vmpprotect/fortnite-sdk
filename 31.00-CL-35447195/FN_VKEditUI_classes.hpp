#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VKEditUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VKEditUI.VKConnectionIndicator
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x200 (0x5F8 - 0x3F8)
	class UVKConnectionIndicator : public UCommonActivatableWidget	
	{
	public:
		FText EditStatusLocalizedText; // 0x3F8(0xA0)
		FDataTableRowHandle OpenLogInputAction; // 0x498(0x10)
		UObject StatusIcon_NotConnected; // 0x4A8(0x8)
		UObject StatusIcon_Connected; // 0x4B0(0x8)
		UObject StatusIcon_RefreshRequired; // 0x4B8(0x8)
		UObject StatusIcon_Preparing; // 0x4C0(0x8)
		UObject StatusIcon_Downloading; // 0x4C8(0x8)
		UObject StatusIcon_UpToDate; // 0x4D0(0x8)
		UObject StatusIcon_StartingGame; // 0x4D8(0x8)
		UObject StatusIcon_GameInProgress; // 0x4E0(0x8)
		UObject StatusIcon_Error; // 0x4E8(0x8)
		UImage Image_StatusIcon; // 0x4F0(0x8)
		UCommonTextBlock Text_StatusMessage; // 0x4F8(0x8)
		UWidgetSwitcher Switcher_AdditionalInfo; // 0x500(0x8)
		UPanelWidget Panel_DownloadContainer; // 0x508(0x8)
		UFortSimpleMaterialProgressBar ProgressBar_Download; // 0x510(0x8)
		UCommonTextBlock Text_DownloadProgress; // 0x518(0x8)
		UPanelWidget Panel_OpenLogContainer; // 0x520(0x8)
		UCommonActionWidget Action_OpenLog; // 0x528(0x8)
		UPanelWidget Panel_SubMessageContainer; // 0x530(0x8)
		UCommonTextBlock Text_SubMessage; // 0x538(0x8)
		UCommonTextBlock Text_EditMode; // 0x540(0x8)
		UPanelWidget Panel_SquadListContainer; // 0x548(0x8)
		UAthenaSquadListBase AthenaSquadList; // 0x550(0x8)
		unsigned char UnknownData01_7[0xA0]; // 0x558(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditUI.VKConnectionIndicator");
			return ret;
		}

		void OnMinigameStateChanged(EFortMinigameState MinigameState, EFortMinigameState PreviousMinigameState); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE7FA0
		void HandleMemorySamplerProgressUpdated(float Progress); // Flags: Final|Native|Private 0x7FF414DE7EC0
	};


	// Class VKEditUI.VKDebugMessagesBase
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class UVKDebugMessagesBase : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditUI.VKDebugMessagesBase");
			return ret;
		}

		void HandleGameStateInitialized(AFortGameState GameState); // Flags: Final|Native|Protected 0x7FF414DE8160
		void BP_OnGameStateInitialized(AFortGameState GameState); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE8080
	};


	// Class VKEditUI.VkEditDynamicUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x58 (0x308 - 0x2B0)
	class AVkEditDynamicUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		UDynamicUIScene MemorySamplingScene; // 0x2B0(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x2B8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditUI.VkEditDynamicUIDirector");
			return ret;
		}
	};


	// Class VKEditUI.VkEditLogTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x560 - 0x3F8)
	class UVkEditLogTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x38]; // 0x3F8(0x38) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x430(0xF0)
		FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x520(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditUI.VkEditLogTab");
			return ret;
		}
	};

}
