#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_ModalDialogUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreativeModalDialogAllowedConversionFunction : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction");
			return ret;
		}

		ECreativeModalDialogViewmodelResponse GetResponseNone(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87900
		ECreativeModalDialogViewmodelResponse GetResponseButton6(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87820
		ECreativeModalDialogViewmodelResponse GetResponseButton5(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87740
		ECreativeModalDialogViewmodelResponse GetResponseButton4(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87660
		ECreativeModalDialogViewmodelResponse GetResponseButton3(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87580
		ECreativeModalDialogViewmodelResponse GetResponseButton2(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D874A0
		ECreativeModalDialogViewmodelResponse GetResponseButton1(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D873C0
	};


	// Class CRD_ModalDialogUI.CreativeModalDialogConversionFunction
	// Inherited from UCreativeModalDialogAllowedConversionFunction -> UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreativeModalDialogConversionFunction : public UCreativeModalDialogAllowedConversionFunction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction");
			return ret;
		}

		ECreativeModalDialogViewmodelResponse TranslateResponse(FWidgetEventField Field, ECreativeModalDialogViewmodelResponse Response); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87E40
		int32_t GetRowIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87D60
		FMargin GetMarginFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallMarginAmount, float WideMarginAmount, float CenteredFullMarginAmount, float DefaultMarginAmount); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87C80
		float GetFloatingValueFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallValue, float WideValue, float CenteredFullValue, float DefaultValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87BA0
		int32_t GetColumnIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D87AC0
		ECreativeModalDialogViewmodelResponse AssignCreativeModalDialogViewmodelResponse(FMVVMEventField Field, ECreativeModalDialogViewmodelResponse Response); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D879E0
	};


	// Class CRD_ModalDialogUI.CreativeModalDialogViewmodel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x120 (0x188 - 0x68)
	class UCreativeModalDialogViewmodel : public UMVVMViewModelBase	
	{
	public:
		FText Title; // 0x68(0x10)
		FText Body; // 0x78(0x10)
		UDataTable TextStyleSet; // 0x88(0x8)
		FText Button01_MainText; // 0x90(0x10)
		FText Button02_MainText; // 0xA0(0x10)
		FText Button03_MainText; // 0xB0(0x10)
		FText Button04_MainText; // 0xC0(0x10)
		FText Button05_MainText; // 0xD0(0x10)
		FText Button06_MainText; // 0xE0(0x10)
		FText Button01_SubText; // 0xF0(0x10)
		FText Button02_SubText; // 0x100(0x10)
		FText Button03_SubText; // 0x110(0x10)
		FText Button04_SubText; // 0x120(0x10)
		FText Button05_SubText; // 0x130(0x10)
		FText Button06_SubText; // 0x140(0x10)
		UTexture2D Art01_Image; // 0x150(0x8)
		UTexture2D Art02_Image; // 0x158(0x8)
		ECreativeModalDialogAlignmentOption ContentAlignment; // 0x160(0x1)
		bool bShowBackground; // 0x161(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x162(0x2) UNKNOWN PROPERTY
		float DialogBackgroundAlpha; // 0x164(0x4)
		ECreativeModalDialogTimerOption TimerOption; // 0x168(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x169(0x3) UNKNOWN PROPERTY
		float Timeout; // 0x16C(0x4)
		float RemainingTimeForTimeout; // 0x170(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		int64_t NumberOfButtons; // 0x178(0x8)
		ECreativeModalBackActionBoundButtonOption BackActionBoundButton; // 0x180(0x1)
		ECreativeModalDialogViewmodelResponse Response; // 0x181(0x1)
		unsigned char UnknownData07_7[0x6]; // 0x182(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel");
			return ret;
		}

		bool ShouldButton6UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D89880
		bool ShouldButton5UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D897A0
		bool ShouldButton4UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D896C0
		bool ShouldButton3UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D895E0
		bool ShouldButton2UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D89500
		bool ShouldButton1UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D89420
		bool IsTimerVisible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D89340
		bool IsButton6Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D89260
		bool IsButton5Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D89180
		bool IsButton4Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D890A0
		bool IsButton3Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88FC0
		bool IsButton2Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88EE0
		bool IsButton1Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88E00
		TEnumAsByte GetVerticalAlignment(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88D20
		ESlateVisibility GetTimerVisibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88C40
		float GetTimeoutProgress(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88B60
		TEnumAsByte GetHorizontalAlignment(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88A80
		ESlateVisibility GetButton6Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D889A0
		FDataTableRowHandle GetButton6TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D888C0
		ESlateVisibility GetButton5Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D887E0
		FDataTableRowHandle GetButton5TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88700
		ESlateVisibility GetButton4Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88620
		FDataTableRowHandle GetButton4TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88540
		ESlateVisibility GetButton3Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88460
		FDataTableRowHandle GetButton3TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88380
		ESlateVisibility GetButton2Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D882A0
		FDataTableRowHandle GetButton2TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D881C0
		ESlateVisibility GetButton1Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D880E0
		FDataTableRowHandle GetButton1TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D88000
		ESlateVisibility GetBackgroundVisibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D87F20
	};


	// Class CRD_ModalDialogUI.CreativeModalDialogWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x408 - 0x3F8)
	class UCreativeModalDialogWidget : public UCommonActivatableWidget	
	{
	public:
		FDataTableRowHandle MainMenuInputRowHandle; // 0x3F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ModalDialogUI.CreativeModalDialogWidget");
			return ret;
		}
	};

}
