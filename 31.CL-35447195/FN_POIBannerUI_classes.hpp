#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: POIBannerUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class POIBannerUI.POIBannerToastSocialAvatar
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x328 - 0x320)
	class UPOIBannerToastSocialAvatar : public UFortHUDElementWidget	
	{
	public:
		UFortSocialAvatarIcon Icon_SocialAvatar; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/POIBannerUI.POIBannerToastSocialAvatar");
			return ret;
		}

		void SetSocialAvatarTexture(TWeakObjectPtr AvatarTexture); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BD7E58
		void SetSocialAvatar(AFortPlayerState PlayerState); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BD7D78
	};


	// Class POIBannerUI.POIBannerToastWidgetBase
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x368 - 0x320)
	class UPOIBannerToastWidgetBase : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x40]; // 0x320(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x360(0x2)
		unsigned char UnknownData03_7[0x6]; // 0x362(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/POIBannerUI.POIBannerToastWidgetBase");
			return ret;
		}

		void OnStompFailed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD82B8
		void OnStompedByOtherWidget(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD81D8
		void K2_OnBecomeInactive(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD80F8
		void K2_OnBecomeActive(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD8018
		FText GetLocationTextFromTag(FGameplayTag& LocationTag); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BD7F38
	};

}
