#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: POIBannerUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class POIBannerUI.POIBannerToastSocialAvatar
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x320 - 0x318)
	class UPOIBannerToastSocialAvatar : public UFortHUDElementWidget	
	{
	public:
		UFortSocialAvatarIcon* Icon_SocialAvatar; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/POIBannerUI.POIBannerToastSocialAvatar");
			return ret;
		}

		void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*> AvatarTexture); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506A2F54(relative to base address)
		void SetSocialAvatar(AFortPlayerState* PlayerState); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506A2ECC(relative to base address)
	};


	// Class POIBannerUI.POIBannerToastWidgetBase
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x360 - 0x318)
	class UPOIBannerToastWidgetBase : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x318(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x358(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x35A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/POIBannerUI.POIBannerToastWidgetBase");
			return ret;
		}

		void OnStompFailed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStompedByOtherWidget(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnBecomeInactive(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnBecomeActive(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetLocationTextFromTag(FGameplayTag& LocationTag); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A2DD0(relative to base address)
	};

}
