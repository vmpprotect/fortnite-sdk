#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicCMSUIFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicCMSUIFramework.EpicCMSImage
	// Inherited from UCommonLazyImage -> UImage -> UWidget -> UVisual -> UObject
	// Size: 0xE0 (0x450 - 0x370)
	class UEpicCMSImage : public UCommonLazyImage	
	{
	public:
		FMulticastInlineDelegate OnImageLoadingComplete; // 0x370(0x10)
		bool bMatchImageSize; // 0x380(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x381(0xF) UNKNOWN PROPERTY
		FSlateBrush LoadingFailFallback; // 0x390(0xB0)
		UTexture2D* ExternalMedia; // 0x440(0x8)
		bool bDownloadingExternalMedia; // 0x448(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x449(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicCMSUIFramework.EpicCMSImage");
			return ret;
		}

		void SetMediaURL(FString MediaUrl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC87038(relative to base address)
	};


	// Class EpicCMSUIFramework.EpicCMSLayoutBase
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x318 - 0x2B0)
	class UEpicCMSLayoutBase : public UUserWidget	
	{
	public:
		TArray<FSlotDescription> CarouselSlotDescriptions; // 0x2B0(0x10)
		UClass* CarouselClass; // 0x2C0(0x8)
		unsigned char UnknownData00_7[0x50]; // 0x2C8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicCMSUIFramework.EpicCMSLayoutBase");
			return ret;
		}
	};


	// Class EpicCMSUIFramework.EpicCMSManager
	// Inherited from UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UEpicCMSManager : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x88]; // 0x28(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicCMSUIFramework.EpicCMSManager");
			return ret;
		}
	};


	// Class EpicCMSUIFramework.EpicCMSScreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x5A0 - 0x528)
	class UEpicCMSScreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		FString TileSetFieldName; // 0x528(0x10)
		TWeakObjectPtr<UDataTable*> TileTypeToTileClassDataTable; // 0x538(0x20)
		TWeakObjectPtr<UClass*> LayoutErrorClass; // 0x558(0x20)
		TWeakObjectPtr<UDataTable*> LayoutTypeToLayoutClassDataTable; // 0x578(0x20)
		unsigned char UnknownData00_7[0x8]; // 0x598(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicCMSUIFramework.EpicCMSScreenBase");
			return ret;
		}
	};


	// Class EpicCMSUIFramework.EpicCMSSimpleMessage
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UEpicCMSSimpleMessage : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock* TitleText; // 0x2D8(0x8)
		UCommonTextBlock* BodyText; // 0x2E0(0x8)
		UEpicCMSImage* PrimaryImage; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicCMSUIFramework.EpicCMSSimpleMessage");
			return ret;
		}
	};


	// Class EpicCMSUIFramework.EpicCMSTileBase
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x14F0 - 0x13E0)
	class UEpicCMSTileBase : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UClass* DefaultTitleTextStyle; // 0x13E8(0x8)
		UClass* FeaturedTitleTextStyle; // 0x13F0(0x8)
		FText Title; // 0x13F8(0x10)
		FString Link; // 0x1408(0x10)
		bool bDownloadingExternalMedia; // 0x1418(0x1)
		bool bRefreshingMcpCatalog; // 0x1419(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x141A(0x6) UNKNOWN PROPERTY
		UTexture2D* ExternalMedia; // 0x1420(0x8)
		unsigned char UnknownData02_6[0x18]; // 0x1428(0x18) UNKNOWN PROPERTY
		UCommonLazyImage* LazyImage_Icon; // 0x1440(0x8)
		UCommonTextBlock* TitleTextBlock; // 0x1448(0x8)
		UCommonTextBlock* SubtitleTextBlock; // 0x1450(0x8)
		UCommonTextBlock* EyebrowTextBlock; // 0x1458(0x8)
		unsigned char UnknownData03_7[0x90]; // 0x1460(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicCMSUIFramework.EpicCMSTileBase");
			return ret;
		}

		void Launch(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74DC86F78(relative to base address)
	};


	// Class EpicCMSUIFramework.EpicCMSTileCarousel
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x300 - 0x2B0)
	class UEpicCMSTileCarousel : public UUserWidget	
	{
	public:
		FSlateSound PreviousButtonSound; // 0x2B0(0x18)
		FSlateSound NextButtonSound; // 0x2C8(0x18)
		UCommonWidgetCarousel* Carousel; // 0x2E0(0x8)
		UWidget* NextPageButton; // 0x2E8(0x8)
		UWidget* PreviousPageButton; // 0x2F0(0x8)
		bool bShouldShowNavigationOnlyOnHover; // 0x2F8(0x1)
		bool bInputActionsForPaging; // 0x2F9(0x1)
		bool bIsShowingNavigation; // 0x2FA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x2FB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicCMSUIFramework.EpicCMSTileCarousel");
			return ret;
		}

		void SetCurrentPageByIndex(int32_t PageIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74DC86FB4(relative to base address)
		void PreviousPage(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74DC86FA0(relative to base address)
		void NextPage(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74DC86F8C(relative to base address)
		void NavigationVisibilityChanged(bool bShowNavigation); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTilePageAdded(UWidget* TileWidget); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74DC86EF4(relative to base address)
		int32_t GetCurrentPageIndex(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC86ECC(relative to base address)
		void BeginAutoScrolling(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC86E98(relative to base address)
		void AddTilePage(UWidget* TilePageWidget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC86CE0(relative to base address)
	};

}
