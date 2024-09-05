#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MobileUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /PlayerAugmentsUI/MobileUI/HLT/BBE_HideIfAugmentsOpen.BBE_HideIfAugmentsOpen_C
	// Inherited from UFortMobileActionBBE_AugmentShoot -> UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UBBE_HideIfAugmentsOpen_C : public UFortMobileActionBBE_AugmentShoot	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/BBE_HideIfAugmentsOpen.BBE_HideIfAugmentsOpen_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/BBE_AugmentRotate.BBE_AugmentRotate_C
	// Inherited from UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UBBE_AugmentRotate_C : public UFortMobileActionButtonBehaviorExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/BBE_AugmentRotate.BBE_AugmentRotate_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/BB_AugmentsList.BB_AugmentsList_C
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UBB_AugmentsList_C : public UFortMobileActionButtonBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/BB_AugmentsList.BB_AugmentsList_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/BB_SwitchAugment.BB_SwitchAugment_C
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UBB_SwitchAugment_C : public UFortMobileActionButtonBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/BB_SwitchAugment.BB_SwitchAugment_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/BB_RerollAugment.BB_RerollAugment_C
	// Inherited from UFortMobileActionButtonBehavior_RerollAugments -> UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UBB_RerollAugment_C : public UFortMobileActionButtonBehavior_RerollAugments	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/BB_RerollAugment.BB_RerollAugment_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/BBE_AugmentShoot.BBE_AugmentShoot_C
	// Inherited from UFortMobileActionBBE_AugmentShoot -> UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UBBE_AugmentShoot_C : public UFortMobileActionBBE_AugmentShoot	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/BBE_AugmentShoot.BBE_AugmentShoot_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C
	// Inherited from UFortMobileHUDElementProxy -> UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3D0 - 0x3C8)
	class UWBP_Mobile_Augment_Selection_Proxy_C : public UFortMobileHUDElementProxy	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C");
			return ret;
		}

		void ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32_t EntryPoint); // Flags: Final 0x15D4C399000
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Preview.WBP_Mobile_Augment_Selection_Preview_C
	// Inherited from UHUDLayoutToolV2_WidgetPreview -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x328 - 0x328)
	class UWBP_Mobile_Augment_Selection_Preview_C : public UHUDLayoutToolV2_WidgetPreview	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Preview.WBP_Mobile_Augment_Selection_Preview_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/BB_ExitAugment.BB_ExitAugment_C
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UBB_ExitAugment_C : public UFortMobileActionButtonBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/BB_ExitAugment.BB_ExitAugment_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_AugmentSelectorHUD.WBP_Mobile_AugmentSelectorHUD_C
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class UWBP_Mobile_AugmentSelectorHUD_C : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_AugmentSelectorHUD.WBP_Mobile_AugmentSelectorHUD_C");
			return ret;
		}
	};


	// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C
	// Inherited from UFortMobilePlayerAugmentTimer -> UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x380 - 0x370)
	class UWBP_Mobile_Augment_SelectionTimer_C : public UFortMobilePlayerAugmentTimer	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x8)
		UWBP_Augment_SelectionTimer_C WBP_Augment_SelectionTimer; // 0x378(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C");
			return ret;
		}

		void BP_OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer, bool bIsSelectionItemEquipped, bool bForceCollapse); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D51B31100
		void ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D51B34100
	};

}
