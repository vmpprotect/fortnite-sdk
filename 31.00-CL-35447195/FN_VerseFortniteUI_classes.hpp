#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseFortniteUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		int64_t MultiplyIntegers(int64_t A, int64_t B, bool bInvertB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC4440
		double MultiplyIntDouble(int64_t A, bool bInvertA, double B, bool bInvertB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC4360
		double MultiplyDoubles(double A, bool bInvertA, double B, bool bInvertB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC4280
		FWidgetTransform MakeTransform(FVector2D Translation, FVector2D Scale, FVector2D Shear, double Angle); // Flags: Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EC41A0
		FSlateBrush MakeImageBrushFromTexture(UTexture2D Image, FVector2D ImageSize, FLinearColor LinearColor, TEnumAsByte TileType); // Flags: Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EC40C0
		FSlateBrush MakeImageBrushFromMaterial(UMaterialInterface Material, FVector2D ImageSize, FLinearColor TintColor); // Flags: Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EC3FE0
		bool InvertBool(bool bValue); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3F00
		FLinearColor Conv_SlateColorToLinearColor(FSlateColor& Value); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EC3E20
		FSlateColor Conv_LinearColorToSlateColor(FLinearColor Value); // Flags: Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414EC3D40
		FText Conv_IntToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int64_t MinimumIntegralDigits, int64_t MaximumIntegralDigits); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3C60
		bool Conv_IntegerToBoolSimple(int64_t Value); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3B80
		bool Conv_IntegerToBoolInterval(int64_t Value, int64_t InclusiveLowerBound, int64_t InclusiveUpperBound); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3AA0
		FText Conv_DoubleToText(double Value, TEnumAsByte RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC39C0
		bool Conv_DoubleToBoolSimple(double Value); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC38E0
		bool Conv_DoubleToBoolInterval(double Value, double InclusiveLowerBound, double InclusiveUpperBound); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3800
		ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3720
		int64_t AddIntegers(int64_t A, bool bNegateA, int64_t B, bool bNegateB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3640
		double AddIntDouble(int64_t A, bool bNegateA, double B, bool bNegateB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3560
		double AddDoubles(double A, bool bNegateA, double B, bool bNegateB); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414EC3480
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
		unsigned char UnknownData01_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_1[0x18]; // 0x58(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIOverlaySlot");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIOverlay
	// Inherited from UOverlay -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1A0 - 0x188)
	class UVerseFortniteUIOverlay : public UOverlay	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x188(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIOverlay");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUINamedSlot
	// Inherited from UNamedSlot -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x198 - 0x188)
	class UVerseFortniteUINamedSlot : public UNamedSlot	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x188(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUINamedSlot");
			return ret;
		}
	};


	// Class VerseFortniteUI.VerseFortniteUIActivableWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x428 - 0x3F8)
	class UVerseFortniteUIActivableWidgetBase : public UCommonActivatableWidget	
	{
	public:
		UVerseFortniteUINamedSlot MainSlot; // 0x3F8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x400(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle MainMenuInputRowHandle; // 0x408(0x10)
		TArray HudToDeactivateOnInitialization; // 0x418(0x10)

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
		TArray Pending; // 0x38(0x10)
		TArray Created; // 0x48(0x10)
		UVerseFortniteUIOverlay PlayerGameViewport; // 0x58(0x8)
		UVerseFortniteUIOverlay ContentGameViewport; // 0x60(0x8)
		UVerseFortniteUIActivableWidgetBase PopupContainer; // 0x68(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr WidgetForDynamicUI; // 0x78(0x20)
		TWeakObjectPtr ActionDomainForDynamicUI; // 0x98(0x20)
		unsigned char UnknownData03_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x18]; // 0x108(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base");
			return ret;
		}

		void ServerClick(APlayerController PlayerController); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414EC46E0
		void OnRep_Message(); // Flags: Final|Native|Private 0x7FF414EC4600
		FText GetText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC4520
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
		unsigned char UnknownData01_1[0x18]; // 0x120(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base");
			return ret;
		}

		void ServerTextCommitted(APlayerController PlayerController, FText NewText); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414EC48A0
		void ExecuteServerTextCommitted(FText& InText, TEnumAsByte InCommitMethod); // Flags: Final|Native|Public|HasOutParms 0x7FF414EC47C0
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
		unsigned char UnknownData01_7[0x28]; // 0xE0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider");
			return ret;
		}

		bool SetValue(float InValue); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414EC55C0
		void SetStepSize(float InMinValue); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414EC54E0
		void SetMinValue(float InMinValue); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414EC5400
		void SetMaxValue(float InMaxValue); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414EC5320
		void ServerValueChanged(APlayerController PlayerController, float InNewValue, int32_t InClientID, int32_t InServerID); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414EC5240
		void OnRep_Value(); // Flags: Final|Native|Private 0x7FF414EC5160
		void OnRep_StepSize(); // Flags: Final|Native|Private 0x7FF414EC5080
		void OnRep_MinValue(); // Flags: Final|Native|Private 0x7FF414EC4FA0
		void OnRep_MaxValue(); // Flags: Final|Native|Private 0x7FF414EC4EC0
		void HandleValueChanged(float NewValue); // Flags: Final|Native|Private 0x7FF414EC4DE0
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC4D00
		float GetStepSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC4C20
		float GetMinValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC4B40
		float GetMaxValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC4A60
		void ExecuteServerValueChanged(float InNewValue, int32_t InClientID, int32_t InServerID); // Flags: Final|Native|Public 0x7FF414EC4980
	};

}
