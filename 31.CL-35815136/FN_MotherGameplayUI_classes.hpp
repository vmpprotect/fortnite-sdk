#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotherGameplayUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x3B8 - 0x318)
	class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget	
	{
	public:
		FEventMessageTag AttachedMessageTag; // 0x318(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x31C(0x4) UNKNOWN PROPERTY
		UScriptStruct* AttachedMessageType; // 0x320(0x8)
		FEventMessageTag DetachedMessageTag; // 0x328(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		UScriptStruct* DetachedMessageType; // 0x330(0x8)
		FEventMessageTag SetMarkerPositionMessageTag; // 0x338(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x33C(0x4) UNKNOWN PROPERTY
		UScriptStruct* SetMarkerPositionMessageType; // 0x340(0x8)
		FName SetMarkerPositionMessagePropertyName; // 0x348(0x4)
		FEventMessageTag TargetDamagedMessageTag; // 0x34C(0x4)
		UScriptStruct* TargetDamagedMessageType; // 0x350(0x8)
		unsigned char UnknownData03_7[0x60]; // 0x358(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.AvocadoEaterHealthBarWidget");
			return ret;
		}

		void OnTargetDamaged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetMarkerPosition(float MarkerPosition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnParasiteDetached(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnParasiteAttached(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x370 - 0x350)
	class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x350(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget");
			return ret;
		}

		void OnItemInactivatable(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemActivatable(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x350 - 0x350)
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
	// Size: 0x60 (0x3B0 - 0x350)
	class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:
		UFortKeybindWidget* Keybind_ActivateAction; // 0x350(0x8)
		UFortKeybindWidget* Keybind_CycleCategoryAction; // 0x358(0x8)
		UFortKeybindWidget* Keybind_CyclePropAction; // 0x360(0x8)
		unsigned char UnknownData00_7[0x48]; // 0x368(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget");
			return ret;
		}

		void OnPropIndexChanged(FText& CategoryText, int32_t PropIndex, int32_t MaxPropCount, int32_t CategoryIndex, int32_t MaxCategoryCount); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPropActivationChanged(bool Activated); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x350 - 0x350)
	class UFortReactorGradeReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget");
			return ret;
		}

		void OnUpdateChargeToMin(float ChargePercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateChargeToAutoDischarge(float ChargePercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMinimumChargeReached(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
	// Inherited from UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x28 (0xA8 - 0x80)
	class UFortMobileActionBBE_GravyGoblinRotate : public UFortMobileActionButtonBehaviorExtension	
	{
	public:
		FGameplayTag GravyGoblinTag; // 0x80(0x4)
		unsigned char UnknownData00_7[0x24]; // 0x84(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate");
			return ret;
		}
	};

}
