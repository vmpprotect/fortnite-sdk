#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WeaponModsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class WeaponModsUI.AthenaEquippedItemInfoWeaponMods
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UAthenaEquippedItemInfoWeaponMods : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaEquippedItemInfoWeaponMods");
			return ret;
		}

		void SetItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetItemInfo(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponFullyEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159E7F4(relative to base address)
	};


	// Class WeaponModsUI.AthenaInventoryGroupWeaponMods
	// Inherited from UAthenaInventoryGroupBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x340 - 0x340)
	class UAthenaInventoryGroupWeaponMods : public UAthenaInventoryGroupBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaInventoryGroupWeaponMods");
			return ret;
		}

		void HandleButtonClicked(UObject* Object); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159E434(relative to base address)
		bool CanWeaponEquipMod(AFortWeapon* Weapon, UFortWeaponModItemDefinition* Mod); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159E360(relative to base address)
	};


	// Class WeaponModsUI.AthenaInventoryItemInfoWeaponMods
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UAthenaInventoryItemInfoWeaponMods : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods");
			return ret;
		}

		void UpdateItemMods(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159E534(relative to base address)
		void SetItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsModifiableWeapon(bool bIsModifiable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetItemInfo(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponModSlotsChanged(AFortWeapon* Weapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159E9D8(relative to base address)
		void HandleInventoryPanelOpened(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159E534(relative to base address)
		void HandleInventoryItemSelected(UFortItem* SelectedItem); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159E4B4(relative to base address)
	};


	// Class WeaponModsUI.AthenaInventoryItemInfoWeaponModsConfigurator
	// Inherited from UAthenaInventoryItemInfoWeaponMods -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UAthenaInventoryItemInfoWeaponModsConfigurator : public UAthenaInventoryItemInfoWeaponMods	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaInventoryItemInfoWeaponModsConfigurator");
			return ret;
		}

		void RemoveMod(UFortWeaponModItemDefinition* ModItemDef); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159EB20(relative to base address)
	};


	// Class WeaponModsUI.AthenaLastKillerWeaponModsInfo
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x320 - 0x318)
	class UAthenaLastKillerWeaponModsInfo : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x318(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaLastKillerWeaponModsInfo");
			return ret;
		}

		void SetKillerWeaponMods(TArray<FFortWeaponModSlot>& ModSlots, bool bShouldShowMods); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class WeaponModsUI.AthenaMarkerDetailsExtensionWeaponMods
	// Inherited from UAthenaMarkerDetailsExtension -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UAthenaMarkerDetailsExtensionWeaponMods : public UAthenaMarkerDetailsExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaMarkerDetailsExtensionWeaponMods");
			return ret;
		}

		void SetModInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetModInfo(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class WeaponModsUI.AthenaPickupIndicatorWeaponMods
	// Inherited from UFortInteractContextInfoWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UAthenaPickupIndicatorWeaponMods : public UFortInteractContextInfoWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods");
			return ret;
		}

		void SetItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemModifiedWeaponName(FText& ModifiedWeaponName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEquippedWeaponItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetEquippedWeaponItemInfo(UItemDefinitionBase* ItemDef); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetItemInfo(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsInspectViewCollapsedBySettings(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159EAD8(relative to base address)
		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75159E68C(relative to base address)
		void HandlePickupHovered(AFortPickup* Pickup); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75159E548(relative to base address)
	};


	// Class WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator
	// Inherited from UAthenaQuickBarSlotExtensionWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x200 (0x4E0 - 0x2E0)
	class UAthenaQuickBarSlotWeaponModsIndicator : public UAthenaQuickBarSlotExtensionWidgetBase	
	{
	public:
		UImage* Image_ModOptic; // 0x2E0(0x8)
		UImage* Image_ModMag; // 0x2E8(0x8)
		UImage* Image_ModUnderbarrel; // 0x2F0(0x8)
		UImage* Image_ModBarrel; // 0x2F8(0x8)
		UImage* Image_ScopeIcon; // 0x300(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x308(0x8) UNKNOWN PROPERTY
		FSlateBrush EmptyModSlotBrush; // 0x310(0xB0)
		FSlateBrush FilledModSlotBrush; // 0x3C0(0xB0)
		TMap<FGameplayTag, UImage*> ModSlotWidgets; // 0x470(0x50)
		FGameplayTag WeaponModSlotOpticTag; // 0x4C0(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x4C4(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator");
			return ret;
		}

		void UpdateModVisuals(TArray<FFortWeaponModSlot>& ModSlots); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75159EC64(relative to base address)
		void SetItemSlotsInfo(TArray<FFortWeaponModSlot>& ModSlots); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75159EBC8(relative to base address)
		void SetItemSlotSelected(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemSlotInfo(FFortWeaponModSlot& ModSlot); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetItemInfo(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159EBB4(relative to base address)
		void ResetIconOpacities(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159EBA0(relative to base address)
		void HandleWeaponModSlotsChanged(AFortWeapon* Weapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159EA58(relative to base address)
		void HandleWeaponFullyEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159E914(relative to base address)
		void HandleQuickBarSlotFocusChanged(EFortQuickBars QuickBarType, int32_t QuickBarSlot); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159E5C8(relative to base address)
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
