#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UIFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class UIFramework.UIFrameworkLocalSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UUIFrameworkLocalSettings : public UDeveloperSettings	
	{
	public:
		TWeakObjectPtr ErrorResource; // 0x30(0x20)
		TWeakObjectPtr LoadingResource; // 0x50(0x20)
		unsigned char UnknownData01_7[0x18]; // 0x70(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkLocalSettings");
			return ret;
		}
	};


	// Class UIFramework.UIFrameworkPlayerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x438 (0x4D8 - 0xA0)
	class UUIFrameworkPlayerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FUIFrameworkGameLayerSlotList RootList; // 0xA8(0x120)
		FUIFrameworkWidgetTree WidgetTree; // 0x1C8(0x1F8)
		UUIFrameworkPresenter Presenter; // 0x3C0(0x8)
		TSet NetReplicationPending; // 0x3C8(0x50)
		TSet AddPending; // 0x418(0x50)
		unsigned char UnknownData03_7[0x70]; // 0x468(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkPlayerComponent");
			return ret;
		}

		void ServerRemoveWidgetRootFromTree(FUIFrameworkWidgetId WidgetId); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF41460B938
		void RemoveWidget(UUIFrameworkWidget Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460B858
		void AddWidget(FUIFrameworkGameLayerSlot Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460B778
	};


	// Class UIFramework.UIFrameworkPresenter
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUIFrameworkPresenter : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkPresenter");
			return ret;
		}
	};


	// Class UIFramework.UIFrameworkGameViewportPresenter
	// Inherited from UUIFrameworkPresenter -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UUIFrameworkGameViewportPresenter : public UUIFrameworkPresenter	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkGameViewportPresenter");
			return ret;
		}
	};


	// Class UIFramework.UIFrameworkWidgetWrapperInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUIFrameworkWidgetWrapperInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkWidgetWrapperInterface");
			return ret;
		}
	};


	// Class UIFramework.UIFrameworkWidget
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x60 (0xC8 - 0x68)
	class UUIFrameworkWidget : public UMVVMViewModelBase	
	{
	public:
		bool bIsEnabled; // 0x68(0x1)
		ESlateVisibility Visibility; // 0x69(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x6A(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr WidgetClass; // 0x70(0x20)
		FUIFrameworkWidgetId ID; // 0x90(0x8)
		TScriptInterface AuthorityWrapper; // 0x98(0x10)
		unsigned char UnknownData03_6[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FUIFrameworkParentWidget AuthorityParent; // 0xB0(0x10)
		UWidget LocalUMGWidget; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkWidget");
			return ret;
		}

		void OnRep_Visibility(); // Flags: Final|Native|Private 0x7FF41460BAF8
		void OnRep_IsEnabled(); // Flags: Final|Native|Private 0x7FF41460BA18
	};


	// Class UIFramework.UIFrameworkButton
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x58 (0x120 - 0xC8)
	class UUIFrameworkButton : public UUIFrameworkWidget	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0xC8(0x18) UNKNOWN PROPERTY
		FUIFrameworkSimpleSlot Slot; // 0xE0(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkButton");
			return ret;
		}

		void SetContent(FUIFrameworkSimpleSlot Content); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460BF58
		void ServerClick(APlayerController PlayerController); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF41460BE78
		void OnRep_Slot(); // Flags: Final|Native|Private 0x7FF41460BD98
		void HandleClick(); // Flags: Final|Native|Private 0x7FF41460BCB8
		FUIFrameworkSimpleSlot GetContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460BBD8
	};


	// Class UIFramework.UIFrameworkButtonWidget
	// Inherited from UButton -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x580 - 0x578)
	class UUIFrameworkButtonWidget : public UButton	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x578(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkButtonWidget");
			return ret;
		}
	};


	// Class UIFramework.UIFrameworkCanvasBox
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x120 (0x1E8 - 0xC8)
	class UUIFrameworkCanvasBox : public UUIFrameworkWidget	
	{
	public:
		FUIFrameworkCanvasBoxSlotList ReplicatedSlotList; // 0xC8(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkCanvasBox");
			return ret;
		}

		void RemoveWidget(UUIFrameworkWidget Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460C118
		void AddWidget(FUIFrameworkCanvasBoxSlot Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460C038
	};


	// Class UIFramework.UIFrameworkColorBlock
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x18 (0xE0 - 0xC8)
	class UUIFrameworkColorBlock : public UUIFrameworkWidget	
	{
	public:
		FLinearColor Color; // 0xC8(0x10)
		FVector2f DesiredSize; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkColorBlock");
			return ret;
		}

		void SetDesiredSize(FVector2f DesiredSize); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF41460C658
		void SetColor(FLinearColor Tint); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF41460C578
		void OnRep_DesiredSize(); // Flags: Final|Native|Private 0x7FF41460C498
		void OnRep_Color(); // Flags: Final|Native|Private 0x7FF41460C3B8
		FVector2f GetDesiredSize(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41460C2D8
		FLinearColor GetColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41460C1F8
	};


	// Class UIFramework.UIFrameworkImageBlock
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x60 (0x128 - 0xC8)
	class UUIFrameworkImageBlock : public UUIFrameworkWidget	
	{
	public:
		FUIFrameworkImageBlockData Data; // 0xC8(0x40)
		bool bWaitForResourceToBeLoaded; // 0x108(0x1)
		unsigned char UnknownData01_7[0x1F]; // 0x109(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkImageBlock");
			return ret;
		}

		void SetTint(FLinearColor Tint); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF41460CF18
		void SetTiling(TEnumAsByte OverflowPolicy); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460CE38
		void SetTexture(TWeakObjectPtr Texture, bool bUseTextureSize); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460CD58
		void SetMaterial(TWeakObjectPtr Material); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460CC78
		void SetDesiredSize(FVector2f DesiredSize); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF41460CB98
		void OnRep_Data(); // Flags: Final|Native|Private 0x7FF41460CAB8
		FLinearColor GetTint(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41460C9D8
		TEnumAsByte GetTiling(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460C8F8
		FVector2f GetDesiredSize(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41460C818
		TWeakObjectPtr GeResourceObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460C738
	};


	// Class UIFramework.UIFrameworkOverlay
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x120 (0x1E8 - 0xC8)
	class UUIFrameworkOverlay : public UUIFrameworkWidget	
	{
	public:
		FUIFrameworkOverlaySlotList ReplicatedSlotList; // 0xC8(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkOverlay");
			return ret;
		}

		void RemoveWidget(UUIFrameworkWidget Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460D0D8
		void AddWidget(FUIFrameworkOverlaySlot Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460CFF8
	};


	// Class UIFramework.UIFrameworkStackBox
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x128 (0x1F0 - 0xC8)
	class UUIFrameworkStackBox : public UUIFrameworkWidget	
	{
	public:
		TEnumAsByte orientation; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		FUIFrameworkStackBoxSlotList ReplicatedSlotList; // 0xD0(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkStackBox");
			return ret;
		}

		void RemoveWidget(UUIFrameworkWidget Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460D378
		void OnRep_Orientation(); // Flags: Final|Native|Private 0x7FF41460D298
		void AddWidget(FUIFrameworkStackBoxSlot Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460D1B8
	};


	// Class UIFramework.UIFrameworkTextBase
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x58 (0x120 - 0xC8)
	class UUIFrameworkTextBase : public UUIFrameworkWidget	
	{
	public:
		FText Text; // 0xC8(0x10)
		FLocalizableMessage Message; // 0xD8(0x30)
		FLinearColor TextColor; // 0x108(0x10)
		TEnumAsByte Justification; // 0x118(0x1)
		ETextOverflowPolicy OverflowPolicy; // 0x119(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkTextBase");
			return ret;
		}

		void SetTextColor(FLinearColor TextColor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF41460DD18
		void SetOverflowPolicy(ETextOverflowPolicy OverflowPolicy); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460DC38
		void SetJustification(TEnumAsByte Justification); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460DB58
		void OnRep_TextColor(); // Flags: Final|Native|Private 0x7FF41460DA78
		void OnRep_OverflowPolicy(); // Flags: Final|Native|Private 0x7FF41460D998
		void OnRep_Message(); // Flags: Final|Native|Private 0x7FF41460D8B8
		void OnRep_Justification(); // Flags: Final|Native|Private 0x7FF41460D7D8
		FLinearColor GetTextColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41460D6F8
		FText GetText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460D618
		ETextOverflowPolicy GetOverflowPolicy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460D538
		TEnumAsByte GetJustification(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460D458
	};


	// Class UIFramework.UIFrameworkTextBlock
	// Inherited from UUIFrameworkTextBase -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x18 (0x138 - 0x120)
	class UUIFrameworkTextBlock : public UUIFrameworkTextBase	
	{
	public:
		FVector2f ShadowOffset; // 0x120(0x8)
		FLinearColor ShadowColor; // 0x128(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkTextBlock");
			return ret;
		}

		void SetShadowOffset(FVector2f ShadowOffset); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF41460E258
		void SetShadowColor(FLinearColor ShadowColor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF41460E178
		void OnRep_ShadowOffset(); // Flags: Final|Native|Private 0x7FF41460E098
		void OnRep_ShadowColor(); // Flags: Final|Native|Private 0x7FF41460DFB8
		FVector2f GetShadowOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41460DED8
		FLinearColor GetShadowColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41460DDF8
	};


	// Class UIFramework.UIFrameworkUserWidget
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x120 (0x1E8 - 0xC8)
	class UUIFrameworkUserWidget : public UUIFrameworkWidget	
	{
	public:
		FUIFrameworkUserWidgetNamedSlotList ReplicatedNamedSlotList; // 0xC8(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkUserWidget");
			return ret;
		}

		void SetWidgetClass(TWeakObjectPtr Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460E4F8
		void SetNamedSlot(FName SlotName, UUIFrameworkWidget Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41460E418
		UUIFrameworkWidget GetNamedSlot(FName SlotName); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41460E338
	};

}
