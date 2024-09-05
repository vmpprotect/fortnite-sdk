#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VKDownloadOnDemandUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x350 - 0x2B0)
	class UDownloadOnDemandProjectManagementTab : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x2B0(0x30) UNKNOWN PROPERTY
		UDownloadOnDemandProject* Project; // 0x2E0(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x2E8(0x10) UNKNOWN PROPERTY
		UCommonTextBlock* TextBlock_ProjectTitle; // 0x2F8(0x8)
		UCommonTextBlock* TextBlock_LinkCode; // 0x300(0x8)
		UCommonTextBlock* TextBlock_VersionNumber; // 0x308(0x8)
		UCommonTextBlock* TextBlock_LatestVersionNumber; // 0x310(0x8)
		UImage* Image_LatestVersionSpinner; // 0x318(0x8)
		UCommonTextBlock* TextBlock_Description; // 0x320(0x8)
		UCommonButtonLegacy* Button_RemoveProject; // 0x328(0x8)
		UCommonButtonLegacy* Button_UpdateProject; // 0x330(0x8)
		UCommonVisibilitySwitcher* Switcher_Props; // 0x338(0x8)
		UCommonTileView* CommonTileView_ProjectAssetTiles; // 0x340(0x8)
		UCommonTextBlock* TextBlock_NoPropsMessage; // 0x348(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab");
			return ret;
		}

		void UpdateProjectConfirmed(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7519F3648(relative to base address)
		void RemoveProjectConfirmed(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7519F35A4(relative to base address)
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandTabPanel
	// Inherited from UFortCreativeContentBrowserTabPanelBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x4D8 - 0x430)
	class UDownloadOnDemandTabPanel : public UFortCreativeContentBrowserTabPanelBase	
	{
	public:
		FDataTableRowHandle AddProjectWithLinkCodeInputRowHandle; // 0x430(0x10)
		FDataTableRowHandle AddSelectedProjectInputRowHandle; // 0x440(0x10)
		FDataTableRowHandle ManageSelectedProjectInputRowHandle; // 0x450(0x10)
		UClass* DownloadOnDemandProjectDetailsSidePanelClass; // 0x460(0x8)
		UClass* DownloadOnDemandAddProjectModalClass; // 0x468(0x8)
		UClass* DownloadOnDemandMessageModalClass; // 0x470(0x8)
		FString AddProjectsWithMnemonicEntitlementName; // 0x478(0x10)
		UDownloadOnDemandProject* SelectedProject; // 0x488(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x490(0x10) UNKNOWN PROPERTY
		UOverlay* Overlay_AddProjectParent; // 0x4A0(0x8)
		UCommonTileView* CommonTileView_ProjectTiles; // 0x4A8(0x8)
		UCommonVisibilitySwitcher* Switcher_DownloadOnDemandPanels; // 0x4B0(0x8)
		UCommonButtonLegacy* Button_AddProject; // 0x4B8(0x8)
		UHorizontalBox* HorizontalBox_EntitlementCheckMessage; // 0x4C0(0x8)
		UHorizontalBox* HorizontalBox_EntitlementCheckFailed; // 0x4C8(0x8)
		UDownloadOnDemandProjectManagementTab* ProjectManagementTab; // 0x4D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandTabPanel");
			return ret;
		}
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
	// Inherited from UCreativeContentBrowserTab_CreationCondition -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDownloadOnDemandTab_EntitlementCreationCondition : public UCreativeContentBrowserTab_CreationCondition	
	{
	public:
		FString EntitlementName; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition");
			return ret;
		}
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x438 - 0x3F0)
	class UDownloadOnDemandAddProjectModal : public UCommonActivatableWidget	
	{
	public:
		UDownloadOnDemandProject* Project; // 0x3F0(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY
		UEditableTextBox* EditableTextBox_DownloadLinkCode; // 0x408(0x8)
		UCommonButtonLegacy* Button_AddProject; // 0x410(0x8)
		UCommonButtonLegacy* Button_Cancel; // 0x418(0x8)
		UDownloadOnDemandProjectTileImage* ProjectTileImage_Preview; // 0x420(0x8)
		UOverlay* Overlay_ProjectTitle; // 0x428(0x8)
		UCommonTextBlock* TextBlock_ProjectTitle; // 0x430(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal");
			return ret;
		}

		void UpdateLightningViolator(ESlateVisibility InVisibility, FText& InText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDownloadLinkIdTextChanged(FText& InputLinkCode); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7519F3508(relative to base address)
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandMessageModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x408 - 0x3F0)
	class UDownloadOnDemandMessageModal : public UCommonActivatableWidget	
	{
	public:
		UCommonTextBlock* TextBlock_MessageTitle; // 0x3F0(0x8)
		UCommonTextBlock* TextBlock_Message; // 0x3F8(0x8)
		UCommonButtonLegacy* Button_Close; // 0x400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandMessageModal");
			return ret;
		}
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UDownloadOnDemandProjectDetailsSidePanel : public UUserWidget	
	{
	public:
		UDownloadOnDemandProjectTile* DownloadOnDemandProjectTile_CurrentProjectEntry; // 0x2B0(0x8)
		UCreativeContentBrowserItemInfo* ContentBrowserItemInfo_ItemDetails; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel");
			return ret;
		}
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UDownloadOnDemandStatusFeed : public UUserWidget	
	{
	public:
		bool bOverrideOldStatusWithNewStatus; // 0x2B0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		UFortDynamicEntryBox* EntryBox_DownloadStatusContainer; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeed");
			return ret;
		}
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UDownloadOnDemandStatusFeedLine : public UUserWidget	
	{
	public:
		UCommonTextBlock* TextBlock_DownloadStatus; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine");
			return ret;
		}
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDownloadOnDemandProjectAssetTileInitializer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UFortPlaysetPropItemDefinition* PropItemDefinition; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer");
			return ret;
		}
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x1420 - 0x13E0)
	class UDownloadOnDemandProjectAssetTile : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UDownloadOnDemandProjectAssetTileInitializer* Initializer; // 0x13E8(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x13F0(0x10) UNKNOWN PROPERTY
		UImage* Image_Item; // 0x1400(0x8)
		UImage* Image_Spinner; // 0x1408(0x8)
		UCommonNumericTextBlock* NumericTextBlock_ItemCount; // 0x1410(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x1418(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile");
			return ret;
		}
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTile
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D0 (0x15B0 - 0x13E0)
	class UDownloadOnDemandProjectTile : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x13E0(0x10) UNKNOWN PROPERTY
		FSlateBrush SelectedHighlightBrush; // 0x13F0(0xB0)
		FSlateBrush HoveredHighlightBrush; // 0x14A0(0xB0)
		bool bIsSelected; // 0x1550(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1551(0x7) UNKNOWN PROPERTY
		UDownloadOnDemandProject* Project; // 0x1558(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x1560(0x10) UNKNOWN PROPERTY
		UDownloadOnDemandProjectTileImage* ProjectTileImage_Preview; // 0x1570(0x8)
		UImage* Image_UpdatePending; // 0x1578(0x8)
		UImage* Image_AddProject; // 0x1580(0x8)
		UImage* Image_Spinner; // 0x1588(0x8)
		UImage* Image_Error; // 0x1590(0x8)
		USizeBox* SizeBox_Label; // 0x1598(0x8)
		UCommonTextBlock* TextBlock_Label; // 0x15A0(0x8)
		UCommonBorder* Border_Highlight; // 0x15A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile");
			return ret;
		}

		void UpdateLabel(bool bShowLabel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519F35C8(relative to base address)
		void OnLabelUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x2E8 - 0x2B0)
	class UDownloadOnDemandProjectTileImage : public UUserWidget	
	{
	public:
		UTexture* EmptyProjectTexture; // 0x2B0(0x8)
		bool bOverrideGrayScale : 1; // 0x2B8:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x2B9(0x3) UNKNOWN PROPERTY
		float GreyScaleOverride; // 0x2BC(0x4)
		UDownloadOnDemandProject* Project; // 0x2C0(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x2C8(0x10) UNKNOWN PROPERTY
		UImage* Image_ProjectPreview; // 0x2D8(0x8)
		UImage* Image_LoadingImageSpinner; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage");
			return ret;
		}
	};

}