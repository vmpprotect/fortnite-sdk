#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WeaponModStationUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchContext
	// Inherited from UBlueprintContextBase -> USubsystem -> UObject
	// Size: 0xB8 (0xE8 - 0x30)
	class UAthenaWeaponModsWorkbenchContext : public UBlueprintContextBase	
	{
	public:
		unsigned char UnknownData03_3[0x20]; // 0x30(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWeaponModsWorkbenchRequestClose; // 0x50(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x60(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWeaponModsWorkbenchSelectedModChanged; // 0x78(0x10)
		unsigned char UnknownData05_7[0x60]; // 0x88(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext");
			return ret;
		}

		void RequestCloseUI(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D55AF8
		void OnWeaponModsWorkbenchSelectedModChanged__DelegateSignature(UFortWeaponModItemDefinition CurrentlySelectedMod); // Flags: MulticastDelegate|Public|Delegate 0x7FF414D55A18
		void OnWeaponModsWorkbenchRequestClose__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF414D55938
		FGameplayTag GetCurrentModCategory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D55858
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UAthenaWeaponModsWorkbenchWidgetBase : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase");
			return ret;
		}

		void OnWorkbenchOpened(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D55E78
		void OnWorkbenchClosed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D55D98
		void OnWeaponModCategoryChanged(FGameplayTag ModTypeTag); // Flags: Event|Protected|BlueprintEvent 0x7FF414D55CB8
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Native|Protected 0x7FF414D55BD8
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UAthenaWeaponModsWorkbenchEquippedModDetails : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails");
			return ret;
		}

		void OnSetEquippedModInfo(UFortWeaponModItemDefinition ModItemDefinition, bool bIsDefaultMod, bool bSlotHasDefaultMod, bool bCanRemoveMod); // Flags: Event|Protected|BlueprintEvent 0x7FF414D562D8
		void OnSetCurrentlySelectedModInfo(UFortWeaponModItemDefinition ModItemDefinition, bool bIsSameCategory, bool bIsEquippedMod); // Flags: Event|Protected|BlueprintEvent 0x7FF414D561F8
		void OnRemoveModClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D56118
		void HandleSetEquippedModInfo(UFortWeaponModItemDefinition WeaponMod); // Flags: Final|Native|Private 0x7FF414D56038
		void HandleCurrentlySelectedModChanged(UFortWeaponModItemDefinition NewSelectedMod); // Flags: Final|Native|Private 0x7FF414D55F58
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x430 - 0x3F8)
	class UAthenaWeaponModsWorkbenchModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		TArray BlockedInputActions; // 0x400(0x10)
		FPrimaryContentSetup PrimaryContentSetup; // 0x410(0x3)
		unsigned char UnknownData04_6[0x5]; // 0x413(0x5) UNKNOWN PROPERTY
		UInputComponent WorkbenchModalInputComp; // 0x418(0x8)
		unsigned char UnknownData05_7[0x10]; // 0x420(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal");
			return ret;
		}

		void OnWeaponEquipped(bool bIsModdable, AFortWeapon NewWeapon); // Flags: Event|Protected|BlueprintEvent 0x7FF414D56738
		void OnInputTypeChanged(ECommonInputType NewInputType); // Flags: Event|Protected|BlueprintEvent 0x7FF414D56658
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414D56578
		void HandleModStationComponentForceStop(AFortWeaponModStationBase WeaponModStation); // Flags: Final|Native|Private 0x7FF414D56498
		void HandleCloseUI(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D563B8
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UAthenaWeaponModsWorkbenchModListEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry");
			return ret;
		}

		void OnRefreshStatus(); // Flags: Event|Public|BlueprintEvent 0x7FF414D56AB8
		void OnListItemSet(UFortItemDefinition Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414D569D8
		bool IsEquippedMod(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D568F8
		bool IsEquippableMod(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D56818
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x320 - 0x2E0)
	class UAthenaWeaponModsWorkbenchModSelection : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:
		UFortWorldItemDefinition PurchasingCurrency; // 0x2E0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY
		UCommonListView ListView_ModChoices; // 0x2F0(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle PreviousListEntryInputAction; // 0x300(0x10)
		FDataTableRowHandle NextListEntryInputAction; // 0x310(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection");
			return ret;
		}

		void SetCanRemoveMod(bool bCanRemoveMod); // Flags: Event|Protected|BlueprintEvent 0x7FF414D57C38
		void RequestRemoveMod(); // Flags: Final|Native|Private 0x7FF414D57B58
		void RequestBuyAndEquip(); // Flags: Final|Native|Private 0x7FF414D57A78
		void OnSetSelectedRemoveModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency); // Flags: Event|Protected|BlueprintEvent 0x7FF414D57998
		void OnSetSelectedModInfo(UFortWeaponModItemDefinition ModItemDef); // Flags: Event|Protected|BlueprintEvent 0x7FF414D578B8
		void OnSetSelectedModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency); // Flags: Event|Protected|BlueprintEvent 0x7FF414D577D8
		void OnRemoveModClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D576F8
		void OnRefreshModType(FGameplayTag ModCategoryTag); // Flags: Event|Protected|BlueprintEvent 0x7FF414D57618
		void OnRefreshMods(TArray& WeaponModItemDefinitions); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D57538
		void OnModRemovedCallback(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D57458
		void OnModPurchaseFailed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D57378
		void OnModPurchasedSuccessfully(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D57298
		void OnExitUIClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D571B8
		void OnBuyAndEquipClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D570D8
		bool IsSelectedModEquippedOnWeapon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D56FF8
		void GetSelectedRemoveModCostAndOwnedCurrency(int32_t& RemoveModCost, int32_t& OwnedCurrency); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D56F18
		void GetSelectedModCostAndOwnedCurrency(int32_t& ModCost, int32_t& OwnedCurrency); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D56E38
		bool DoesEquippedWeaponHaveDefaultModForSlot(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D56D58
		bool CanRemoveSelectedModFromWeapon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D56C78
		bool CanApplySelectedModToEquippedWeapon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D56B98
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UAthenaWeaponModsWorkbenchModTypeButton : public UCommonButtonBase	
	{
	public:
		FGameplayTag ModTypeTag; // 0x1390(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1394(0x4) UNKNOWN PROPERTY
		UFortWeaponModItemDefinition DefaultModItemDef; // 0x1398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton");
			return ret;
		}

		void SetEquippedOrDefaultMod(UFortWeaponModItemDefinition ItemDefinition, bool bIsAvailableCategory); // Flags: Event|Protected|BlueprintEvent 0x7FF414D58098
		void OnWorkbenchOpened(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D57FB8
		void OnWorkbenchClosed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D57ED8
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414D57DF8
		FGameplayTag GetModTypeTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D57D18
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UAthenaWeaponModsWorkbenchModTypeTabs : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle PreviousTabInputAction; // 0x2E8(0x10)
		FDataTableRowHandle NextTabInputAction; // 0x2F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs");
			return ret;
		}

		void SetItemSlotInfo(TArray& ModSlots); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D58418
		void RequestTabInDirection_BP(int32_t Direction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D58338
		void OnModTypeTabClicked(FGameplayTag ModTypeTag); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D58258
		TArray GetTabButtons(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414D58178
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UAthenaWeaponModsWorkbenchWeaponDetails : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails");
			return ret;
		}

		void SetWeaponType(FText& WeaponTypeText, UTexture2D WeaponTypeTexture, bool bIsValidType); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D585D8
		void OnWeaponEquipped(UItemDefinitionBase ItemDefinition, FText& DisplayName, bool bIsModdable); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D584F8
	};


	// Class WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer
	// Inherited from UAthenaWeaponModsWorkbenchWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UAthenaWeaponModsWorkbenchWeaponRenderContainer : public UAthenaWeaponModsWorkbenchWidgetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer");
			return ret;
		}

		void OnWeaponModSlotsChanged(AFortWeapon Weapon); // Flags: Event|Protected|BlueprintEvent 0x7FF414D58878
		void OnWeaponModSlotPreview(AFortWeapon Weapon, UFortWeaponModItemDefinition PreviewingModItemDefinition); // Flags: Event|Protected|BlueprintEvent 0x7FF414D58798
		void HandleWeaponModSlotPreview(UFortWeaponModItemDefinition PreviewingModItemDefinition); // Flags: Final|Native|Private 0x7FF414D586B8
	};

}
