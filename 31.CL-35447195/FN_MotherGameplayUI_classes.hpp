#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotherGameplayUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x3C0 - 0x320)
	class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget	
	{
	public:
		FEventMessageTag AttachedMessageTag; // 0x320(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x324(0x4) UNKNOWN PROPERTY
		UScriptStruct AttachedMessageType; // 0x328(0x8)
		FEventMessageTag DetachedMessageTag; // 0x330(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		UScriptStruct DetachedMessageType; // 0x338(0x8)
		FEventMessageTag SetMarkerPositionMessageTag; // 0x340(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x344(0x4) UNKNOWN PROPERTY
		UScriptStruct SetMarkerPositionMessageType; // 0x348(0x8)
		FName SetMarkerPositionMessagePropertyName; // 0x350(0x4)
		FEventMessageTag TargetDamagedMessageTag; // 0x354(0x4)
		UScriptStruct TargetDamagedMessageType; // 0x358(0x8)
		unsigned char UnknownData07_7[0x60]; // 0x360(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.AvocadoEaterHealthBarWidget");
			return ret;
		}

		void OnTargetDamaged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDA938
		void OnSetMarkerPosition(float MarkerPosition); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDA858
		void OnParasiteDetached(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDA778
		void OnParasiteAttached(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDA698
	};


	// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x378 - 0x358)
	class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x358(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget");
			return ret;
		}

		void OnItemInactivatable(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDAAF8
		void OnItemActivatable(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDAA18
	};


	// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x358 - 0x358)
	class UFortLlamaRoasterReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget");
			return ret;
		}
	};


	// Class MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x3B8 - 0x358)
	class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:
		UFortKeybindWidget Keybind_ActivateAction; // 0x358(0x8)
		UFortKeybindWidget Keybind_CycleCategoryAction; // 0x360(0x8)
		UFortKeybindWidget Keybind_CyclePropAction; // 0x368(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x370(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget");
			return ret;
		}

		void OnPropIndexChanged(FText& CategoryText, int32_t PropIndex, int32_t MaxPropCount, int32_t CategoryIndex, int32_t MaxCategoryCount); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CDACB8
		void OnPropActivationChanged(bool Activated); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDABD8
	};


	// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x358 - 0x358)
	class UFortReactorGradeReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget");
			return ret;
		}

		void OnUpdateChargeToMin(float ChargePercent); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDAF58
		void OnUpdateChargeToAutoDischarge(float ChargePercent); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDAE78
		void OnMinimumChargeReached(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CDAD98
	};


	// Class MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
	// Inherited from UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x28 (0xA8 - 0x80)
	class UFortMobileActionBBE_GravyGoblinRotate : public UFortMobileActionButtonBehaviorExtension	
	{
	public:
		FGameplayTag GravyGoblinTag; // 0x80(0x4)
		unsigned char UnknownData01_7[0x24]; // 0x84(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate");
			return ret;
		}
	};

}
