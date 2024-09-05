#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UIFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class UIFramework.UIFrameworkLocalSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UUIFrameworkLocalSettings : public UDeveloperSettings	
	{
	public:
		TWeakObjectPtr<UObject*> ErrorResource; // 0x30(0x20)
		TWeakObjectPtr<UObject*> LoadingResource; // 0x50(0x20)
		unsigned char UnknownData00_7[0x18]; // 0x70(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FUIFrameworkGameLayerSlotList RootList; // 0xA8(0x120)
		FUIFrameworkWidgetTree WidgetTree; // 0x1C8(0x1F8)
		UUIFrameworkPresenter* Presenter; // 0x3C0(0x8)
		TSet<int32_t> NetReplicationPending; // 0x3C8(0x50)
		TSet<int32_t> AddPending; // 0x418(0x50)
		unsigned char UnknownData01_7[0x70]; // 0x468(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkPlayerComponent");
			return ret;
		}

		void ServerRemoveWidgetRootFromTree(FUIFrameworkWidgetId WidgetId); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74D691C74(relative to base address)
		void RemoveWidget(UUIFrameworkWidget* Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D691B74(relative to base address)
		void AddWidget(FUIFrameworkGameLayerSlot Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D6912E0(relative to base address)
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
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x6]; // 0x6A(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> WidgetClass; // 0x70(0x20)
		FUIFrameworkWidgetId ID; // 0x90(0x8)
		TScriptInterface<Class> AuthorityWrapper; // 0x98(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FUIFrameworkParentWidget AuthorityParent; // 0xB0(0x10)
		UWidget* LocalUMGWidget; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkWidget");
			return ret;
		}

		void OnRep_Visibility(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691A40(relative to base address)
		void OnRep_IsEnabled(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691850(relative to base address)
	};


	// Class UIFramework.UIFrameworkButton
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x58 (0x120 - 0xC8)
	class UUIFrameworkButton : public UUIFrameworkWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xC8(0x18) UNKNOWN PROPERTY
		FUIFrameworkSimpleSlot Slot; // 0xE0(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkButton");
			return ret;
		}

		void SetContent(FUIFrameworkSimpleSlot Content); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D691EA0(relative to base address)
		void ServerClick(APlayerController* PlayerController); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74D099234(relative to base address)
		void OnRep_Slot(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D6919F0(relative to base address)
		void HandleClick(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691800(relative to base address)
		FUIFrameworkSimpleSlot GetContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691604(relative to base address)
	};


	// Class UIFramework.UIFrameworkButtonWidget
	// Inherited from UButton -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x570 - 0x568)
	class UUIFrameworkButtonWidget : public UButton	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x568(0x8) UNKNOWN PROPERTY

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

		void RemoveWidget(UUIFrameworkWidget* Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D691A74(relative to base address)
		void AddWidget(FUIFrameworkCanvasBoxSlot Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D691088(relative to base address)
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

		void SetDesiredSize(FVector2f DesiredSize); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D691FCC(relative to base address)
		void SetColor(FLinearColor Tint); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D691D88(relative to base address)
		void OnRep_DesiredSize(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691814(relative to base address)
		void OnRep_Color(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691814(relative to base address)
		FVector2f GetDesiredSize(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691680(relative to base address)
		FLinearColor GetColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6915E8(relative to base address)
	};


	// Class UIFramework.UIFrameworkImageBlock
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x60 (0x128 - 0xC8)
	class UUIFrameworkImageBlock : public UUIFrameworkWidget	
	{
	public:
		FUIFrameworkImageBlockData Data; // 0xC8(0x40)
		bool bWaitForResourceToBeLoaded; // 0x108(0x1)
		unsigned char UnknownData00_7[0x1F]; // 0x109(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkImageBlock");
			return ret;
		}

		void SetTint(FLinearColor Tint); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D691D88(relative to base address)
		void SetTiling(TEnumAsByte<ESlateBrushTileType> OverflowPolicy); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D692918(relative to base address)
		void SetTexture(TWeakObjectPtr<UTexture2D*> Texture, bool bUseTextureSize); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D6927E0(relative to base address)
		void SetMaterial(TWeakObjectPtr<UMaterialInterface*> Material); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D692264(relative to base address)
		void SetDesiredSize(FVector2f DesiredSize); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D6920D8(relative to base address)
		void OnRep_Data(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D69183C(relative to base address)
		FLinearColor GetTint(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6915E8(relative to base address)
		TEnumAsByte GetTiling(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6917E8(relative to base address)
		FVector2f GetDesiredSize(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1D44(relative to base address)
		TWeakObjectPtr GeResourceObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691538(relative to base address)
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

		void RemoveWidget(UUIFrameworkWidget* Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D691AF4(relative to base address)
		void AddWidget(FUIFrameworkOverlaySlot Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D6911B4(relative to base address)
	};


	// Class UIFramework.UIFrameworkStackBox
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x128 (0x1F0 - 0xC8)
	class UUIFrameworkStackBox : public UUIFrameworkWidget	
	{
	public:
		TEnumAsByte<EOrientation> orientation; // 0xC8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		FUIFrameworkStackBoxSlotList ReplicatedSlotList; // 0xD0(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkStackBox");
			return ret;
		}

		void RemoveWidget(UUIFrameworkWidget* Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D691BF4(relative to base address)
		void OnRep_Orientation(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D6918FC(relative to base address)
		void AddWidget(FUIFrameworkStackBoxSlot Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D69140C(relative to base address)
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
		TEnumAsByte<ETextJustify> Justification; // 0x118(0x1)
		ETextOverflowPolicy OverflowPolicy; // 0x119(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UIFramework.UIFrameworkTextBase");
			return ret;
		}

		void SetTextColor(FLinearColor TextColor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D6926C8(relative to base address)
		void SetOverflowPolicy(ETextOverflowPolicy OverflowPolicy); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D692424(relative to base address)
		void SetJustification(TEnumAsByte<ETextJustify> Justification); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D6921E4(relative to base address)
		void OnRep_TextColor(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691A04(relative to base address)
		void OnRep_OverflowPolicy(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691954(relative to base address)
		void OnRep_Message(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D6918B4(relative to base address)
		void OnRep_Justification(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691884(relative to base address)
		FLinearColor GetTextColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6917CC(relative to base address)
		FText GetText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691788(relative to base address)
		ETextOverflowPolicy GetOverflowPolicy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D69173C(relative to base address)
		TEnumAsByte GetJustification(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691698(relative to base address)
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

		void SetShadowOffset(FVector2f ShadowOffset); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D6925BC(relative to base address)
		void SetShadowColor(FLinearColor ShadowColor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D6924A4(relative to base address)
		void OnRep_ShadowOffset(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D6919C0(relative to base address)
		void OnRep_ShadowColor(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D691984(relative to base address)
		FVector2f GetShadowOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691770(relative to base address)
		FLinearColor GetShadowColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691754(relative to base address)
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

		void SetWidgetClass(TWeakObjectPtr<UClass*> Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D692998(relative to base address)
		void SetNamedSlot(FName SlotName, UUIFrameworkWidget* Widget); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D692360(relative to base address)
		UUIFrameworkWidget GetNamedSlot(FName SlotName); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6916B0(relative to base address)
	};

}
