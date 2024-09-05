#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ItemizationCoreUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ItemizationCoreUI.InventoryCollectionViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0xB8 (0x120 - 0x68)
	class UInventoryCollectionViewModel : public UMVVMViewModelBase	
	{
	public:
		TArray InventoryViewModels; // 0x68(0x10)
		UInventoryItemEntryViewModel LastSelectedItemEntryViewModel; // 0x78(0x8)
		UInventoryItemEntryViewModel LastActiveItemEntryViewModel; // 0x80(0x8)
		UInventoryItemEntryViewModel LastAmountChangedItemEntryViewModel; // 0x88(0x8)
		TArray LastAddedItemEntryViewModels; // 0x90(0x10)
		TMap ItemEntryIDToItemEntryViewModels; // 0xA0(0x50)
		unsigned char UnknownData01_7[0x30]; // 0xF0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryCollectionViewModel");
			return ret;
		}
	};


	// Class ItemizationCoreUI.InventoryCollectionViewModelResolver
	// Inherited from UMVVMViewModelContextResolver -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInventoryCollectionViewModelResolver : public UMVVMViewModelContextResolver	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryCollectionViewModelResolver");
			return ret;
		}
	};


	// Class ItemizationCoreUI.InventoryCollectionViewModelsManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x110 (0x140 - 0x30)
	class UInventoryCollectionViewModelsManager : public UWorldSubsystem	
	{
	public:
		TMap InventoryCollectionToViewModelMap; // 0x30(0x50)
		unsigned char UnknownData01_7[0xC0]; // 0x80(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryCollectionViewModelsManager");
			return ret;
		}

		void OnInventoryCollectionDestroyed(AActor Actor); // Flags: Final|Native|Private 0x7FF414BC2598
	};


	// Class ItemizationCoreUI.InventoryItemEntryViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x100 (0x168 - 0x68)
	class UInventoryItemEntryViewModel : public UMVVMViewModelBase	
	{
	public:
		bool bItemSelected; // 0x68(0x1)
		bool bItemBeingSwapped; // 0x69(0x1)
		bool bCanDrop; // 0x6A(0x1)
		bool bCanSwap; // 0x6B(0x1)
		bool bIsCooldownActive; // 0x6C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float CooldownTimeLeft; // 0x70(0x4)
		float CooldownProgress; // 0x74(0x4)
		int64_t ItemAmountChanged; // 0x78(0x8)
		UTexture2D CachedItemIcon; // 0x80(0x8)
		unsigned char UnknownData03_7[0xE0]; // 0x88(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryItemEntryViewModel");
			return ret;
		}

		void UseItem(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC3EF8
		void UpdateCanSwap(UInventoryItemEntryViewModel SwapInventoryItemEntryViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC3E18
		void ToggleEquippableItemActive(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC3D38
		void SetEquippableItemActive(bool bActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC3C58
		bool IsValidItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC3B78
		bool IsItemIconLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC3A98
		bool IsItemActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC39B8
		bool IsEquipSlotInputBindingVisible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC38D8
		TWeakObjectPtr GetSoftItemIcon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC37F8
		int64_t GetMaxItemAmount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC3718
		UItemType GetItemType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC3638
		int32_t GetItemSlotNumber(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC3558
		UItemRarity GetItemRarity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC3478
		int64_t GetItemPrimaryAmmoCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC3398
		FText GetItemName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC32B8
		EItemIconDisplayTextType GetItemIconDisplayTextType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC31D8
		UTexture2D GetItemIcon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC30F8
		FGuid GetItemEntryID(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414BC3018
		FText GetItemDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC2F38
		UItemDefinitionBase GetItemDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC2E58
		int64_t GetItemAmount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC2D78
		FGuid GetInventoryID(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414BC2C98
		UInputAction GetEquipSlotInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC2BB8
		void DropHalf(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC2AD8
		void DropAmount(int64_t Amount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC29F8
		void DropAll(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC2918
		bool CanItemBeStacked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC2838
		bool CanItemBeMadeInactive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC2758
		bool CanItemBeMadeActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC2678
	};


	// Class ItemizationCoreUI.InventoryItemStreamEntryViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x18 (0x80 - 0x68)
	class UInventoryItemStreamEntryViewModel : public UMVVMViewModelBase	
	{
	public:
		UInventoryItemEntryViewModel ItemEntryViewModel; // 0x68(0x8)
		int64_t DisplayedAmount; // 0x70(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryItemStreamEntryViewModel");
			return ret;
		}
	};


	// Class ItemizationCoreUI.InventoryItemStreamViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x30 (0x98 - 0x68)
	class UInventoryItemStreamViewModel : public UMVVMViewModelBase	
	{
	public:
		TArray ItemStreamEntryViewModels; // 0x68(0x10)
		int32_t MaximumDisplayedEntries; // 0x78(0x4)
		float ExpirationTime; // 0x7C(0x4)
		bool bCombineItemEntries; // 0x80(0x1)
		bool bShowItemAmountIncreased; // 0x81(0x1)
		bool bShowItemAmountDecreased; // 0x82(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x83(0x5) UNKNOWN PROPERTY
		TArray AllowedItemTypes; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryItemStreamViewModel");
			return ret;
		}

		void RemoveItemEntry(UInventoryItemEntryViewModel ItemEntryViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC4358
		void RemoveAllItemEntries(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC4278
		void OnItemEntryAmountChanged(UInventoryItemEntryViewModel ItemEntryViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC4198
		void AddItemEntry(UInventoryItemEntryViewModel ItemEntryViewModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC40B8
		void AddItemEntries(TArray& ItemEntryViewModels); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BC3FD8
	};


	// Class ItemizationCoreUI.InventoryViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UInventoryViewModel : public UMVVMViewModelBase	
	{
	public:
		TArray ItemEntryViewModels; // 0x68(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryViewModel");
			return ret;
		}

		int32_t GetTotalSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC45F8
		FText GetInventoryName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC4518
		FText GetInventoryDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BC4438
	};


	// Class ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInventoryViewModelAllowedConversionFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions");
			return ret;
		}

		TArray GetInventoryItemEntryViewModels(TArray InventoryItemEntryViewModels, bool bIncludeEmptySlots); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BC4978
		TArray GetAllowedInventoryClasses(); // Flags: Final|Native|Public|Const 0x7FF414BC4898
		UInventoryViewModel FindInventoryViewModelByName(FString InventoryName, TArray& InventoryViewModels); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BC47B8
		UInventoryViewModel FindInventoryViewModel(UClass InventoryClass, TArray& InventoryViewModels); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BC46D8
	};


	// Class ItemizationCoreUI.InventoryViewModelConversionFunctions
	// Inherited from UInventoryViewModelAllowedConversionFunctions -> UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInventoryViewModelConversionFunctions : public UInventoryViewModelAllowedConversionFunctions	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryViewModelConversionFunctions");
			return ret;
		}
	};


	// Class ItemizationCoreUI.VerseInventoryItemEntryViewModelBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseInventoryItemEntryViewModelBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.VerseInventoryItemEntryViewModelBase");
			return ret;
		}
	};


	// Class ItemizationCoreUI.VerseInventoryViewModelBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseInventoryViewModelBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.VerseInventoryViewModelBase");
			return ret;
		}
	};

}
