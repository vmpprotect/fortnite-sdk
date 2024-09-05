#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseFortniteUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseFortniteUIAllowedConversionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary");
			return ret;
		}

		int64_t MultiplyIntegers(int64_t A, int64_t B, bool bInvertB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521AA1E4(relative to base address)
		double MultiplyIntDouble(int64_t A, bool bInvertA, double B, bool bInvertB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521AA05C(relative to base address)
		double MultiplyDoubles(double A, bool bInvertA, double B, bool bInvertB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A9F0C(relative to base address)
		FWidgetTransform MakeTransform(FVector2D Translation, FVector2D Scale, FVector2D Shear, double Angle); // Flags: Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A9B70(relative to base address)
		FSlateBrush MakeImageBrushFromTexture(UTexture2D* Image, FVector2D ImageSize, FLinearColor LinearColor, TEnumAsByte<ESlateBrushTileType> TileType); // Flags: Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A9870(relative to base address)
		FSlateBrush MakeImageBrushFromMaterial(UMaterialInterface* Material, FVector2D ImageSize, FLinearColor TintColor); // Flags: Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A962C(relative to base address)
		bool InvertBool(bool bValue); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A95B0(relative to base address)
		FLinearColor Conv_SlateColorToLinearColor(FSlateColor& Value); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A9260(relative to base address)
		FSlateColor Conv_LinearColorToSlateColor(FLinearColor Value); // Flags: Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A9158(relative to base address)
		FText Conv_IntToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int64_t MinimumIntegralDigits, int64_t MaximumIntegralDigits); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A8E3C(relative to base address)
		bool Conv_IntegerToBoolSimple(int64_t Value); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A90E4(relative to base address)
		bool Conv_IntegerToBoolInterval(int64_t Value, int64_t InclusiveLowerBound, int64_t InclusiveUpperBound); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A8FE8(relative to base address)
		FText Conv_DoubleToText(double Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A8BC4(relative to base address)
		bool Conv_DoubleToBoolSimple(double Value); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A8B30(relative to base address)
		bool Conv_DoubleToBoolInterval(double Value, double InclusiveLowerBound, double InclusiveUpperBound); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A8A1C(relative to base address)
		ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7490A967C(relative to base address)
		int64_t AddIntegers(int64_t A, bool bNegateA, int64_t B, bool bNegateB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A88D4(relative to base address)
		double AddIntDouble(int64_t A, bool bNegateA, double B, bool bNegateB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A877C(relative to base address)
		double AddDoubles(double A, bool bNegateA, double B, bool bNegateB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7521A8610(relative to base address)
	};


	// Class VerseFortniteUI.VerseFortniteUIConversionLibrary
	// Inherited from UVerseFortniteUIAllowedConversionLibrary -> UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseFortniteUIConversionLibrary : public UVerseFortniteUIAllowedConversionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIConversionLibrary");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortnitePlayspaceHUDController
	// Inherited from UVerseFortnitePlayspaceExtensionBase -> UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FHUDElementVisibilityRepData VisibilityData; // 0x38(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortnitePlayspaceHUDController");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIOverlaySlot
	// Inherited from UOverlaySlot -> UPanelSlot -> UVisual -> UObject
	// Size: 0x18 (0x70 - 0x58)
	class UVerseFortniteUIOverlaySlot : public UOverlaySlot	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x58(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIOverlaySlot");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIOverlay
	// Inherited from UOverlay -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x198 - 0x180)
	class UVerseFortniteUIOverlay : public UOverlay	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x180(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIOverlay");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUINamedSlot
	// Inherited from UNamedSlot -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x190 - 0x180)
	class UVerseFortniteUINamedSlot : public UNamedSlot	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x180(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUINamedSlot");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIActivableWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x420 - 0x3F0)
	class UVerseFortniteUIActivableWidgetBase : public UCommonActivatableWidget	
	{
	public:
		UVerseFortniteUINamedSlot* MainSlot; // 0x3F0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle MainMenuInputRowHandle; // 0x400(0x10)
		TArray<FGameplayTagContainer> HudToDeactivateOnInitialization; // 0x410(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIActivableWidgetBase");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIPresenter
	// Inherited from UUIFrameworkGameViewportPresenter -> UUIFrameworkPresenter -> UObject
	// Size: 0x88 (0xC0 - 0x38)
	class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter	
	{
	public:
		TArray<FVerseFortniteUIPresenterElement> Pending; // 0x38(0x10)
		TArray<FVerseFortniteUIPresenterElement> Created; // 0x48(0x10)
		UVerseFortniteUIOverlay* PlayerGameViewport; // 0x58(0x8)
		UVerseFortniteUIOverlay* ContentGameViewport; // 0x60(0x8)
		UVerseFortniteUIActivableWidgetBase* PopupContainer; // 0x68(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> WidgetForDynamicUI; // 0x78(0x20)
		TWeakObjectPtr<UCommonInputActionDomain*> ActionDomainForDynamicUI; // 0x98(0x20)
		unsigned char UnknownData01_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIPresenter");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteWidgetViewmodel
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseFortniteWidgetViewmodel : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteWidgetViewmodel");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x58 (0x120 - 0xC8)
	class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget	
	{
	public:
		FText Text; // 0xC8(0x10)
		FLocalizableMessage Message; // 0xD8(0x30)
		unsigned char UnknownData00_7[0x18]; // 0x108(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base");
			return ret;
		}

		void ServerClick(APlayerController* PlayerController); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74D099234(relative to base address)
		void OnRep_Message(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7521AA318(relative to base address)
		FText GetText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691788(relative to base address)
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
	// Inherited from UVerseFortniteUIFrameworkButton_Base -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x120 - 0x120)
	class UVerseFortniteUIFrameworkButton_Loud : public UVerseFortniteUIFrameworkButton_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
	// Inherited from UVerseFortniteUIFrameworkButton_Base -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x120 - 0x120)
	class UVerseFortniteUIFrameworkButton_Regular : public UVerseFortniteUIFrameworkButton_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
	// Inherited from UVerseFortniteUIFrameworkButton_Base -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x120 - 0x120)
	class UVerseFortniteUIFrameworkButton_Quiet : public UVerseFortniteUIFrameworkButton_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkText_Base
	// Inherited from UUIFrameworkTextBase -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x18 (0x138 - 0x120)
	class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x120(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base");
			return ret;
		}

		void ServerTextCommitted(APlayerController* PlayerController, FText NewText); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF7521AA420(relative to base address)
		void ExecuteServerTextCommitted(FText& InText, TEnumAsByte<ETextCommit> InCommitMethod); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7521A930C(relative to base address)
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
	// Inherited from UUIFrameworkTextBlock -> UUIFrameworkTextBase -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UVerseFortniteUIFrameworkTextBlock : public UUIFrameworkTextBlock	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkTextBlock");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableText
	// Inherited from UVerseFortniteUIFrameworkText_Base -> UUIFrameworkTextBase -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UVerseFortniteUIFrameworkEditableText : public UVerseFortniteUIFrameworkText_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableText");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
	// Inherited from UVerseFortniteUIFrameworkText_Base -> UUIFrameworkTextBase -> UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x138 - 0x138)
	class UVerseFortniteUIFrameworkEditableTextBox : public UVerseFortniteUIFrameworkText_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIFrameworkSlider
	// Inherited from UUIFrameworkWidget -> UMVVMViewModelBase -> UObject
	// Size: 0x40 (0x108 - 0xC8)
	class UVerseFortniteUIFrameworkSlider : public UUIFrameworkWidget	
	{
	public:
		FVerseFortniteUIFrameworkSliderValue Value; // 0xC8(0xC)
		float MinValue; // 0xD4(0x4)
		float MaxValue; // 0xD8(0x4)
		float StepSize; // 0xDC(0x4)
		unsigned char UnknownData00_7[0x28]; // 0xE0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider");
			return ret;
		}

		bool SetValue(float InValue); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521AA7C0(relative to base address)
		void SetStepSize(float InMinValue); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521AA738(relative to base address)
		void SetMinValue(float InMinValue); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521AA6B8(relative to base address)
		void SetMaxValue(float InMaxValue); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7521AA638(relative to base address)
		void ServerValueChanged(APlayerController* PlayerController, float InNewValue, int32_t InClientID, int32_t InServerID); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF7521AA4F8(relative to base address)
		void OnRep_Value(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7521AA3A4(relative to base address)
		void OnRep_StepSize(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7521AA37C(relative to base address)
		void OnRep_MinValue(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7521AA354(relative to base address)
		void OnRep_MaxValue(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7521AA2F0(relative to base address)
		void HandleValueChanged(float NewValue); // Flags: Final|Native|Private, Memory Exec: 0x7FF7521A9530(relative to base address)
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749336438(relative to base address)
		float GetStepSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D528D8(relative to base address)
		float GetMinValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F86403C(relative to base address)
		float GetMaxValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C8DFC24(relative to base address)
		void ExecuteServerValueChanged(float InNewValue, int32_t InClientID, int32_t InServerID); // Flags: Final|Native|Public, Memory Exec: 0x7FF7521A9438(relative to base address)
	};

}
