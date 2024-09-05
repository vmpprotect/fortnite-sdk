#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VKEditUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VKEditUI.VKConnectionIndicator
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x200 (0x5F0 - 0x3F0)
	class UVKConnectionIndicator : public UCommonActivatableWidget	
	{
	public:
		FText EditStatusLocalizedText; // 0x3F0(0xA0)
		FDataTableRowHandle OpenLogInputAction; // 0x490(0x10)
		UObject* StatusIcon_NotConnected; // 0x4A0(0x8)
		UObject* StatusIcon_Connected; // 0x4A8(0x8)
		UObject* StatusIcon_RefreshRequired; // 0x4B0(0x8)
		UObject* StatusIcon_Preparing; // 0x4B8(0x8)
		UObject* StatusIcon_Downloading; // 0x4C0(0x8)
		UObject* StatusIcon_UpToDate; // 0x4C8(0x8)
		UObject* StatusIcon_StartingGame; // 0x4D0(0x8)
		UObject* StatusIcon_GameInProgress; // 0x4D8(0x8)
		UObject* StatusIcon_Error; // 0x4E0(0x8)
		UImage* Image_StatusIcon; // 0x4E8(0x8)
		UCommonTextBlock* Text_StatusMessage; // 0x4F0(0x8)
		UWidgetSwitcher* Switcher_AdditionalInfo; // 0x4F8(0x8)
		UPanelWidget* Panel_DownloadContainer; // 0x500(0x8)
		UFortSimpleMaterialProgressBar* ProgressBar_Download; // 0x508(0x8)
		UCommonTextBlock* Text_DownloadProgress; // 0x510(0x8)
		UPanelWidget* Panel_OpenLogContainer; // 0x518(0x8)
		UCommonActionWidget* Action_OpenLog; // 0x520(0x8)
		UPanelWidget* Panel_SubMessageContainer; // 0x528(0x8)
		UCommonTextBlock* Text_SubMessage; // 0x530(0x8)
		UCommonTextBlock* Text_EditMode; // 0x538(0x8)
		UPanelWidget* Panel_SquadListContainer; // 0x540(0x8)
		UAthenaSquadListBase* AthenaSquadList; // 0x548(0x8)
		unsigned char UnknownData00_7[0xA0]; // 0x550(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditUI.VKConnectionIndicator");
			return ret;
		}

		void OnMinigameStateChanged(EFortMinigameState MinigameState, EFortMinigameState PreviousMinigameState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMemorySamplerProgressUpdated(float Progress); // Flags: Final|Native|Private, Memory Exec: 0x7FF7519FBA80(relative to base address)
	};


	// Class VKEditUI.VKDebugMessagesBase
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x318 - 0x318)
	class UVKDebugMessagesBase : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditUI.VKDebugMessagesBase");
			return ret;
		}

		void HandleGameStateInitialized(AFortGameState* GameState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519FBA00(relative to base address)
		void BP_OnGameStateInitialized(AFortGameState* GameState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VKEditUI.VkEditDynamicUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x58 (0x308 - 0x2B0)
	class AVkEditDynamicUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		UDynamicUIScene* MemorySamplingScene; // 0x2B0(0x8)
		unsigned char UnknownData00_7[0x50]; // 0x2B8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditUI.VkEditDynamicUIDirector");
			return ret;
		}
	};


	// Class VKEditUI.VkEditLogTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x160 (0x550 - 0x3F0)
	class UVkEditLogTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x420(0xF0)
		FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x510(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKEditUI.VkEditLogTab");
			return ret;
		}
	};

}
