#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WeaponModsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WeaponModsUI.AthenaEquippedItemInfoWeaponMods
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UAthenaEquippedItemInfoWeaponMods : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaEquippedItemInfoWeaponMods");
			return ret;
		}

		void SetItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D58BF8
		void ResetItemInfo(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D58B18
		void HandleWeaponFullyEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414D58A38
	};


	// Class WeaponModsUI.AthenaInventoryGroupWeaponMods
	// Inherited from UAthenaInventoryGroupBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x350 - 0x350)
	class UAthenaInventoryGroupWeaponMods : public UAthenaInventoryGroupBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaInventoryGroupWeaponMods");
			return ret;
		}

		void HandleButtonClicked(UObject Object); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D58DB8
		bool CanWeaponEquipMod(AFortWeapon Weapon, UFortWeaponModItemDefinition Mod); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D58CD8
	};


	// Class WeaponModsUI.AthenaInventoryItemInfoWeaponMods
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UAthenaInventoryItemInfoWeaponMods : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods");
			return ret;
		}

		void UpdateItemMods(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D593D8
		void SetItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D592F8
		void SetIsModifiableWeapon(bool bIsModifiable); // Flags: Event|Protected|BlueprintEvent 0x7FF414D59218
		void ResetItemInfo(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D59138
		void HandleWeaponModSlotsChanged(AFortWeapon Weapon); // Flags: Final|Native|Private 0x7FF414D59058
		void HandleInventoryPanelOpened(); // Flags: Final|Native|Private 0x7FF414D58F78
		void HandleInventoryItemSelected(UFortItem SelectedItem); // Flags: Final|Native|Private 0x7FF414D58E98
	};


	// Class WeaponModsUI.AthenaInventoryItemInfoWeaponModsConfigurator
	// Inherited from UAthenaInventoryItemInfoWeaponMods -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UAthenaInventoryItemInfoWeaponModsConfigurator : public UAthenaInventoryItemInfoWeaponMods	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaInventoryItemInfoWeaponModsConfigurator");
			return ret;
		}

		void RemoveMod(UFortWeaponModItemDefinition ModItemDef); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D594B8
	};


	// Class WeaponModsUI.AthenaLastKillerWeaponModsInfo
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x328 - 0x320)
	class UAthenaLastKillerWeaponModsInfo : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x320(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaLastKillerWeaponModsInfo");
			return ret;
		}

		void SetKillerWeaponMods(TArray& ModSlots, bool bShouldShowMods); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D59598
	};


	// Class WeaponModsUI.AthenaMarkerDetailsExtensionWeaponMods
	// Inherited from UAthenaMarkerDetailsExtension -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UAthenaMarkerDetailsExtensionWeaponMods : public UAthenaMarkerDetailsExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaMarkerDetailsExtensionWeaponMods");
			return ret;
		}

		void SetModInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D59758
		void ResetModInfo(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D59678
	};


	// Class WeaponModsUI.AthenaPickupIndicatorWeaponMods
	// Inherited from UFortInteractContextInfoWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UAthenaPickupIndicatorWeaponMods : public UFortInteractContextInfoWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods");
			return ret;
		}

		void SetItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D59E58
		void SetItemModifiedWeaponName(FText& ModifiedWeaponName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D59D78
		void SetEquippedWeaponItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D59C98
		void SetEquippedWeaponItemInfo(UItemDefinitionBase ItemDef); // Flags: Event|Protected|BlueprintEvent 0x7FF414D59BB8
		void ResetItemInfo(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D59AD8
		bool IsInspectViewCollapsedBySettings(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D599F8
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Protected 0x7FF414D59918
		void HandlePickupHovered(AFortPickup Pickup); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D59838
	};


	// Class WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator
	// Inherited from UAthenaQuickBarSlotExtensionWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1F8 (0x4E0 - 0x2E8)
	class UAthenaQuickBarSlotWeaponModsIndicator : public UAthenaQuickBarSlotExtensionWidgetBase	
	{
	public:
		UImage Image_ModOptic; // 0x2E8(0x8)
		UImage Image_ModMag; // 0x2F0(0x8)
		UImage Image_ModUnderbarrel; // 0x2F8(0x8)
		UImage Image_ModBarrel; // 0x300(0x8)
		UImage Image_ScopeIcon; // 0x308(0x8)
		FSlateBrush EmptyModSlotBrush; // 0x310(0xB0)
		FSlateBrush FilledModSlotBrush; // 0x3C0(0xB0)
		TMap ModSlotWidgets; // 0x470(0x50)
		FGameplayTag WeaponModSlotOpticTag; // 0x4C0(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x4C4(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator");
			return ret;
		}

		void UpdateModVisuals(TArray& ModSlots); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414D5A638
		void SetItemSlotsInfo(TArray& ModSlots); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414D5A558
		void SetItemSlotSelected(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414D5A478
		void SetItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D5A398
		void ResetItemInfo(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D5A2B8
		void ResetIconOpacities(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D5A1D8
		void HandleWeaponModSlotsChanged(AFortWeapon Weapon); // Flags: Final|Native|Private 0x7FF414D5A0F8
		void HandleWeaponFullyEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414D5A018
		void HandleQuickBarSlotFocusChanged(EFortQuickBars QuickBarType, int32_t QuickBarSlot); // Flags: Final|Native|Private 0x7FF414D59F38
	};


	// Class WeaponModsUI.FortGameSettingRegistryExtension_WeaponModsUI
	// Inherited from UFortGameSettingRegistryExtension -> UFortGameSettingRegistryExtensionBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortGameSettingRegistryExtension_WeaponModsUI : public UFortGameSettingRegistryExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.FortGameSettingRegistryExtension_WeaponModsUI");
			return ret;
		}
	};


	// Class WeaponModsUI.FortPickupInteractOverrideComponent_ModdableWeapons
	// Inherited from UFortPickupInteractOverrideComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xD0 - 0xC0)
	class UFortPickupInteractOverrideComponent_ModdableWeapons : public UFortPickupInteractOverrideComponent	
	{
	public:
		FMulticastInlineDelegate OnAttemptSecondInteractDelegate; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.FortPickupInteractOverrideComponent_ModdableWeapons");
			return ret;
		}
	};

}
