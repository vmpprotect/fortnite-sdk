#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WeaponModStationUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchContext
	// Inherited from UBlueprintContextBase -> USubsystem -> UObject
	// Size: 0xB8 (0xE8 - 0x30)
	class UAthenaWeaponModsWorkbenchContext : public UBlueprintContextBase	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x30(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWeaponModsWorkbenchRequestClose; // 0x50(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x60(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWeaponModsWorkbenchSelectedModChanged; // 0x78(0x10)
		unsigned char UnknownData02_7[0x60]; // 0x88(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext");
			return ret;
		}

		void RequestCloseUI(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75159C390(relative to base address)
		void OnWeaponModsWorkbenchSelectedModChanged__DelegateSignature(UFortWeaponModItemDefinition* CurrentlySelectedMod); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponModsWorkbenchRequestClose__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FGameplayTag GetCurrentModCategory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C8DFC24(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
	class UAthenaWeaponModsWorkbenchWidgetBase : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase");
			return ret;
		}

		void OnWorkbenchOpened(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWorkbenchClosed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponModCategoryChanged(FGameplayTag ModTypeTag); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Native|Protected, Memory Exec: 0x7FF75159BF98(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
	class UAthenaWeaponModsWorkbenchEquippedModDetails : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails");
			return ret;
		}

		void OnSetEquippedModInfo(UFortWeaponModItemDefinition* ModItemDefinition, bool bIsDefaultMod, bool bSlotHasDefaultMod, bool bCanRemoveMod); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCurrentlySelectedModInfo(UFortWeaponModItemDefinition* ModItemDefinition, bool bIsSameCategory, bool bIsEquippedMod); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemoveModClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159C354(relative to base address)
		void HandleSetEquippedModInfo(UFortWeaponModItemDefinition* WeaponMod); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159BD34(relative to base address)
		void HandleCurrentlySelectedModChanged(UFortWeaponModItemDefinition* NewSelectedMod); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159BC34(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x428 - 0x3F0)
	class UAthenaWeaponModsWorkbenchModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		TArray<FName> BlockedInputActions; // 0x3F8(0x10)
		FPrimaryContentSetup PrimaryContentSetup; // 0x408(0x3)
		unsigned char UnknownData01_6[0x5]; // 0x40B(0x5) UNKNOWN PROPERTY
		UInputComponent* WorkbenchModalInputComp; // 0x410(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x418(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal");
			return ret;
		}

		void OnWeaponEquipped(bool bIsModdable, AFortWeapon* NewWeapon); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputTypeChanged(ECommonInputType NewInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159BED4(relative to base address)
		void HandleModStationComponentForceStop(AFortWeaponModStationBase* WeaponModStation); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159BCB4(relative to base address)
		void HandleCloseUI(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74E94B630(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UAthenaWeaponModsWorkbenchModListEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry");
			return ret;
		}

		void OnRefreshStatus(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemSet(UFortItemDefinition* Item); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsEquippedMod(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159C150(relative to base address)
		bool IsEquippableMod(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159C0E0(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x318 - 0x2D8)
	class UAthenaWeaponModsWorkbenchModSelection : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:
		UFortWorldItemDefinition* PurchasingCurrency; // 0x2D8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		UCommonListView* ListView_ModChoices; // 0x2E8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x2F0(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle PreviousListEntryInputAction; // 0x2F8(0x10)
		FDataTableRowHandle NextListEntryInputAction; // 0x308(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection");
			return ret;
		}

		void SetCanRemoveMod(bool bCanRemoveMod); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestRemoveMod(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159C37C(relative to base address)
		void RequestBuyAndEquip(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159C208(relative to base address)
		void OnSetSelectedRemoveModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetSelectedModInfo(UFortWeaponModItemDefinition* ModItemDef); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetSelectedModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemoveModClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159C37C(relative to base address)
		void OnRefreshModType(FGameplayTag ModCategoryTag); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRefreshMods(TArray<UFortWeaponModItemDefinition*>& WeaponModItemDefinitions); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModRemovedCallback(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModPurchaseFailed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModPurchasedSuccessfully(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitUIClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159C21C(relative to base address)
		void OnBuyAndEquipClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159C208(relative to base address)
		bool IsSelectedModEquippedOnWeapon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159C1E4(relative to base address)
		void GetSelectedRemoveModCostAndOwnedCurrency(int32_t& RemoveModCost, int32_t& OwnedCurrency); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159BAD8(relative to base address)
		void GetSelectedModCostAndOwnedCurrency(int32_t& ModCost, int32_t& OwnedCurrency); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75159B97C(relative to base address)
		bool DoesEquippedWeaponHaveDefaultModForSlot(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159B940(relative to base address)
		bool CanRemoveSelectedModFromWeapon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749859FE0(relative to base address)
		bool CanApplySelectedModToEquippedWeapon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159B8D0(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UAthenaWeaponModsWorkbenchModTypeButton : public UCommonButtonBase	
	{
	public:
		FGameplayTag ModTypeTag; // 0x1390(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1394(0x4) UNKNOWN PROPERTY
		UFortWeaponModItemDefinition* DefaultModItemDef; // 0x1398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton");
			return ret;
		}

		void SetEquippedOrDefaultMod(UFortWeaponModItemDefinition* ItemDefinition, bool bIsAvailableCategory); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWorkbenchOpened(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWorkbenchClosed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159BDB4(relative to base address)
		FGameplayTag GetModTypeTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75159B964(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UAthenaWeaponModsWorkbenchModTypeTabs : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle PreviousTabInputAction; // 0x2E0(0x10)
		FDataTableRowHandle NextTabInputAction; // 0x2F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs");
			return ret;
		}

		void SetItemSlotInfo(TArray<FFortWeaponModSlot>& ModSlots); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestTabInDirection_BP(int32_t Direction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75159C3A4(relative to base address)
		void OnModTypeTabClicked(FGameplayTag ModTypeTag); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75159C244(relative to base address)
		TArray GetTabButtons(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UAthenaWeaponModsWorkbenchWeaponDetails : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails");
			return ret;
		}

		void SetWeaponType(FText& WeaponTypeText, UTexture2D* WeaponTypeTexture, bool bIsValidType); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponEquipped(UItemDefinitionBase* ItemDefinition, FText& DisplayName, bool bIsModdable); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
	class UAthenaWeaponModsWorkbenchWeaponRenderContainer : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer");
			return ret;
		}

		void OnWeaponModSlotsChanged(AFortWeapon* Weapon); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponModSlotPreview(AFortWeapon* Weapon, UFortWeaponModItemDefinition* PreviewingModItemDefinition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponModSlotPreview(UFortWeaponModItemDefinition* PreviewingModItemDefinition); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159C060(relative to base address)
	};

}
