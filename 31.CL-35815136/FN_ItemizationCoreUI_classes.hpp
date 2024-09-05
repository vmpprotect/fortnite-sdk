#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ItemizationCoreUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ItemizationCoreUI.InventoryCollectionViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0xB8 (0x120 - 0x68)
	class UInventoryCollectionViewModel : public UMVVMViewModelBase	
	{
	public:
		TArray<UInventoryViewModel*> InventoryViewModels; // 0x68(0x10)
		UInventoryItemEntryViewModel* LastSelectedItemEntryViewModel; // 0x78(0x8)
		UInventoryItemEntryViewModel* LastActiveItemEntryViewModel; // 0x80(0x8)
		UInventoryItemEntryViewModel* LastAmountChangedItemEntryViewModel; // 0x88(0x8)
		TArray<UInventoryItemEntryViewModel*> LastAddedItemEntryViewModels; // 0x90(0x10)
		TMap<FGuid, UInventoryItemEntryViewModel*> ItemEntryIDToItemEntryViewModels; // 0xA0(0x50)
		unsigned char UnknownData00_7[0x30]; // 0xF0(0x30) UNKNOWN PROPERTY

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
		TMap<FInventoryCollectionKey, UInventoryCollectionViewModel*> InventoryCollectionToViewModelMap; // 0x30(0x50)
		unsigned char UnknownData00_7[0xC0]; // 0x80(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryCollectionViewModelsManager");
			return ret;
		}

		void OnInventoryCollectionDestroyed(AActor* Actor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505FB934(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float CooldownTimeLeft; // 0x70(0x4)
		float CooldownProgress; // 0x74(0x4)
		int64_t ItemAmountChanged; // 0x78(0x8)
		UTexture2D* CachedItemIcon; // 0x80(0x8)
		unsigned char UnknownData01_7[0xE0]; // 0x88(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryItemEntryViewModel");
			return ret;
		}

		void UseItem(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FBF9C(relative to base address)
		void UpdateCanSwap(UInventoryItemEntryViewModel* SwapInventoryItemEntryViewModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FBEA4(relative to base address)
		void ToggleEquippableItemActive(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FBE78(relative to base address)
		void SetEquippableItemActive(bool bActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FBDF8(relative to base address)
		bool IsValidItem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB908(relative to base address)
		bool IsItemIconLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB8D8(relative to base address)
		bool IsItemActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB8B4(relative to base address)
		bool IsEquipSlotInputBindingVisible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB82C(relative to base address)
		TWeakObjectPtr GetSoftItemIcon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB7C0(relative to base address)
		int64_t GetMaxItemAmount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB79C(relative to base address)
		UItemType GetItemType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB778(relative to base address)
		int32_t GetItemSlotNumber(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB6FC(relative to base address)
		UItemRarity GetItemRarity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB678(relative to base address)
		int64_t GetItemPrimaryAmmoCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB654(relative to base address)
		FText GetItemName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB618(relative to base address)
		EItemIconDisplayTextType GetItemIconDisplayTextType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB594(relative to base address)
		UTexture2D GetItemIcon(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB570(relative to base address)
		FGuid GetItemEntryID(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FE10390(relative to base address)
		FText GetItemDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB534(relative to base address)
		UItemDefinitionBase GetItemDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB510(relative to base address)
		int64_t GetItemAmount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB4EC(relative to base address)
		FGuid GetInventoryID(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB338(relative to base address)
		UInputAction GetEquipSlotInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB29C(relative to base address)
		void DropHalf(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FAF18(relative to base address)
		void DropAmount(int64_t Amount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FAE98(relative to base address)
		void DropAll(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FAE84(relative to base address)
		bool CanItemBeStacked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FAE58(relative to base address)
		bool CanItemBeMadeInactive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FADDC(relative to base address)
		bool CanItemBeMadeActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FAD5C(relative to base address)
	};


	// Class ItemizationCoreUI.InventoryItemStreamEntryViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x18 (0x80 - 0x68)
	class UInventoryItemStreamEntryViewModel : public UMVVMViewModelBase	
	{
	public:
		UInventoryItemEntryViewModel* ItemEntryViewModel; // 0x68(0x8)
		int64_t DisplayedAmount; // 0x70(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

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
		TArray<UInventoryItemStreamEntryViewModel*> ItemStreamEntryViewModels; // 0x68(0x10)
		int32_t MaximumDisplayedEntries; // 0x78(0x4)
		float ExpirationTime; // 0x7C(0x4)
		bool bCombineItemEntries; // 0x80(0x1)
		bool bShowItemAmountIncreased; // 0x81(0x1)
		bool bShowItemAmountDecreased; // 0x82(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x83(0x5) UNKNOWN PROPERTY
		TArray<UItemType*> AllowedItemTypes; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryItemStreamViewModel");
			return ret;
		}

		void RemoveItemEntry(UInventoryItemEntryViewModel* ItemEntryViewModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FBAA4(relative to base address)
		void RemoveAllItemEntries(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FBA34(relative to base address)
		void OnItemEntryAmountChanged(UInventoryItemEntryViewModel* ItemEntryViewModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FB9B4(relative to base address)
		void AddItemEntry(UInventoryItemEntryViewModel* ItemEntryViewModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505FACDC(relative to base address)
		void AddItemEntries(TArray<UInventoryItemEntryViewModel*>& ItemEntryViewModels); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505FABF4(relative to base address)
	};


	// Class ItemizationCoreUI.InventoryViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UInventoryViewModel : public UMVVMViewModelBase	
	{
	public:
		TArray<UInventoryItemEntryViewModel*> ItemEntryViewModels; // 0x68(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x78(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreUI.InventoryViewModel");
			return ret;
		}

		int32_t GetTotalSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB808(relative to base address)
		FText GetInventoryName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB4B0(relative to base address)
		FText GetInventoryDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505FB2FC(relative to base address)
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

		TArray GetInventoryItemEntryViewModels(TArray<UInventoryItemEntryViewModel*> InventoryItemEntryViewModels, bool bIncludeEmptySlots); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7505FB354(relative to base address)
		TArray GetAllowedInventoryClasses(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF7505FB234(relative to base address)
		UInventoryViewModel FindInventoryViewModelByName(FString InventoryName, TArray<UInventoryViewModel*>& InventoryViewModels); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7505FB0B0(relative to base address)
		UInventoryViewModel FindInventoryViewModel(UClass* InventoryClass, TArray<UInventoryViewModel*>& InventoryViewModels); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7505FAF58(relative to base address)
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
