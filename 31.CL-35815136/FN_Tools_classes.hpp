#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Tools
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2D (0x2DD - 0x2B0)
	class UWBP_Sparks_Dbg_VariantChannel_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UComboBoxString* cb_ItemList; // 0x2B8(0x8)
		UImage* Image; // 0x2C0(0x8)
		UCommonTextBlock* txt_Name; // 0x2C8(0x8)
		UWBP_Sparks_Dbg_CosmeticItem_C* ParentItem; // 0x2D0(0x8)
		FGameplayTag ChannelTag; // 0x2D8(0x4)
		bool SendUpdates; // 0x2DC(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C");
			return ret;
		}

		void ShouldSendUpdates(bool ShouldSend); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSelection(FString Choice); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetNameAndChannels(FGameplayTag Tag, FText Channel Name, TArray<FString>& Options); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Sparks_Dbg_VariantChannel_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Sparks_Dbg_VariantChannel(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F0 - 0x2B0)
	class UWBP_Sparks_Dbg_CosmeticItem_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UComboBoxString* cb_ItemList; // 0x2B8(0x8)
		UImage* Image; // 0x2C0(0x8)
		UCommonTextBlock* txt_Name; // 0x2C8(0x8)
		UVerticalBox* vb_Channels; // 0x2D0(0x8)
		USparksAccountItemDefinition* AccountItem; // 0x2D8(0x8)
		ESparksAccountItemSubtype Subtype; // 0x2E0(0x1)
		ESparksInstrumentType Instrument; // 0x2E1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2E2(0x6) UNKNOWN PROPERTY
		UWBP_Sparks_Dbg_CosmeticPicker_C* ParentPicker; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C");
			return ret;
		}

		void RefreshChoices(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChildSetChoice(FGameplayTag Channel, FString Choice); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshData(TMap<FGameplayTag, FString> Choices); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTypes(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemInfo(USparksAccountItemDefinition* Item); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Sparks_Dbg_CosmeticItem_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticItem(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x310 - 0x2B0)
	class UWBP_Sparks_Dbg_CosmeticPicker_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UIconTextButton_C* btn_Defaults; // 0x2B8(0x8)
		UIconTextButton_C* btn_Reload; // 0x2C0(0x8)
		UIconTextButton_C* btn_Save; // 0x2C8(0x8)
		UCheckBox* chk_Collapse; // 0x2D0(0x8)
		UImage* Image; // 0x2D8(0x8)
		UImage* Image; // 0x2E0(0x8)
		UVerticalBox* vb_Items; // 0x2E8(0x8)
		UBP_SparksCosmeticComponent_C* CosmeticComponent; // 0x2F0(0x8)
		UWBP_Sparks_Dbg_CosmeticItem_C* AuraWidget; // 0x2F8(0x8)
		UWBP_Sparks_Dbg_Cosmetic_Group_C* InstrumentWidget; // 0x300(0x8)
		UWBP_Sparks_Dbg_Cosmetic_Group_C* SpotlightWidget; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C");
			return ret;
		}

		void GetChoice(ESparksAccountItemSubtype Item Subtype, ESparksInstrumentType Instrument type, FGameplayTag Variant Channel, FString& Choice); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCosmeticItemChanged(USparksAccountItemDefinition* ItemDef); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCosmeticChoiceChanged(ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCosmeticComponent(UBP_SparksCosmeticComponent_C* Component); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReloadData(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Sparks_CosmeticPicker_chk_Collapse_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Sparks_CosmeticPicker_btn_Reload_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Defaults_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Save_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticPicker(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x338 - 0x2B0)
	class UWBP_Sparks_Dbg_Cosmetic_Group_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCheckBox* chk_Collapse; // 0x2B8(0x8)
		UImage* Image; // 0x2C0(0x8)
		UCommonTextBlock* txt_Title; // 0x2C8(0x8)
		UVerticalBox* vb_Items; // 0x2D0(0x8)
		bool Title; // 0x2D8(0x1)
		ESparksAccountItemSubtype Item_Type; // 0x2D9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2DA(0x6) UNKNOWN PROPERTY
		UWBP_Sparks_Dbg_CosmeticPicker_C* ParentPicker; // 0x2E0(0x8)
		TMap<ESparksInstrumentType, UWBP_Sparks_Dbg_CosmeticItem_C*> Items; // 0x2E8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C");
			return ret;
		}

		void OnChoiceChanged(ESparksInstrumentType Instrument); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemInfo(USparksAccountItemDefinition* NewItem); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshAll(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGroupSubtype(ESparksAccountItemSubtype ItemType); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Sparks_Dbg_Cosmetic_Group_chk_Collapse_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Sparks_Dbg_Cosmetic_Group(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class ASunDirectionandColorSet_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		USceneComponent* Scene; // 0x298(0x8)
		UArrowComponent* Arrow; // 0x2A0(0x8)
		FLinearColor SunLightColor; // 0x2A8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C");
			return ret;
		}

		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SunDirectionandColorSet(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
