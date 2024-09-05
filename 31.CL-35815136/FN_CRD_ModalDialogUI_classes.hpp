#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_ModalDialogUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		ECreativeModalDialogViewmodelResponse GetResponseNone(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516CA15C(relative to base address)
		ECreativeModalDialogViewmodelResponse GetResponseButton6(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516CA064(relative to base address)
		ECreativeModalDialogViewmodelResponse GetResponseButton5(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9F6C(relative to base address)
		ECreativeModalDialogViewmodelResponse GetResponseButton4(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9E74(relative to base address)
		ECreativeModalDialogViewmodelResponse GetResponseButton3(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9D7C(relative to base address)
		ECreativeModalDialogViewmodelResponse GetResponseButton2(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9C84(relative to base address)
		ECreativeModalDialogViewmodelResponse GetResponseButton1(FWidgetEventField Field); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9B8C(relative to base address)
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

		ECreativeModalDialogViewmodelResponse TranslateResponse(FWidgetEventField Field, ECreativeModalDialogViewmodelResponse Response); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9270(relative to base address)
		int32_t GetRowIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516CA248(relative to base address)
		FMargin GetMarginFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallMarginAmount, float WideMarginAmount, float CenteredFullMarginAmount, float DefaultMarginAmount); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9A00(relative to base address)
		float GetFloatingValueFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, float TallValue, float WideValue, float CenteredFullValue, float DefaultValue); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C97E8(relative to base address)
		int32_t GetColumnIndexForButtonFromContentAlignment(ECreativeModalDialogAlignmentOption AlignmentOption, int32_t ButtonIndex, int32_t WideMaxColumns, int32_t TallMaxColumns, int32_t DefaultMaxColumns); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9668(relative to base address)
		ECreativeModalDialogViewmodelResponse AssignCreativeModalDialogViewmodelResponse(FMVVMEventField Field, ECreativeModalDialogViewmodelResponse Response); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7516C9270(relative to base address)
	};


	// Class CRD_ModalDialogUI.CreativeModalDialogViewmodel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x120 (0x188 - 0x68)
	class UCreativeModalDialogViewmodel : public UMVVMViewModelBase	
	{
	public:
		FText Title; // 0x68(0x10)
		FText Body; // 0x78(0x10)
		UDataTable* TextStyleSet; // 0x88(0x8)
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
		UTexture2D* Art01_Image; // 0x150(0x8)
		UTexture2D* Art02_Image; // 0x158(0x8)
		ECreativeModalDialogAlignmentOption ContentAlignment; // 0x160(0x1)
		bool bShowBackground; // 0x161(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x162(0x2) UNKNOWN PROPERTY
		float DialogBackgroundAlpha; // 0x164(0x4)
		ECreativeModalDialogTimerOption TimerOption; // 0x168(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x169(0x3) UNKNOWN PROPERTY
		float Timeout; // 0x16C(0x4)
		float RemainingTimeForTimeout; // 0x170(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		int64_t NumberOfButtons; // 0x178(0x8)
		ECreativeModalBackActionBoundButtonOption BackActionBoundButton; // 0x180(0x1)
		ECreativeModalDialogViewmodelResponse Response; // 0x181(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x182(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel");
			return ret;
		}

		bool ShouldButton6UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA650(relative to base address)
		bool ShouldButton5UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA624(relative to base address)
		bool ShouldButton4UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA5F8(relative to base address)
		bool ShouldButton3UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA5CC(relative to base address)
		bool ShouldButton2UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA5A0(relative to base address)
		bool ShouldButton1UseFallbackDefaultInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA574(relative to base address)
		bool IsTimerVisible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA544(relative to base address)
		bool IsButton6Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA528(relative to base address)
		bool IsButton5Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA50C(relative to base address)
		bool IsButton4Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA4F0(relative to base address)
		bool IsButton3Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA4D4(relative to base address)
		bool IsButton2Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA4B8(relative to base address)
		bool IsButton1Visible(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA49C(relative to base address)
		TEnumAsByte GetVerticalAlignment(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA424(relative to base address)
		ESlateVisibility GetTimerVisibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA3EC(relative to base address)
		float GetTimeoutProgress(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516CA3C8(relative to base address)
		TEnumAsByte GetHorizontalAlignment(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C9988(relative to base address)
		ESlateVisibility GetButton6Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C964C(relative to base address)
		FDataTableRowHandle GetButton6TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C9610(relative to base address)
		ESlateVisibility GetButton5Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C95F4(relative to base address)
		FDataTableRowHandle GetButton5TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C95B8(relative to base address)
		ESlateVisibility GetButton4Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C959C(relative to base address)
		FDataTableRowHandle GetButton4TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C9560(relative to base address)
		ESlateVisibility GetButton3Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C9544(relative to base address)
		FDataTableRowHandle GetButton3TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C9508(relative to base address)
		ESlateVisibility GetButton2Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C94EC(relative to base address)
		FDataTableRowHandle GetButton2TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C94B0(relative to base address)
		ESlateVisibility GetButton1Visibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C9494(relative to base address)
		FDataTableRowHandle GetButton1TriggeringInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C9458(relative to base address)
		ESlateVisibility GetBackgroundVisibility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516C9434(relative to base address)
	};


	// Class CRD_ModalDialogUI.CreativeModalDialogWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x400 - 0x3F0)
	class UCreativeModalDialogWidget : public UCommonActivatableWidget	
	{
	public:
		FDataTableRowHandle MainMenuInputRowHandle; // 0x3F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_ModalDialogUI.CreativeModalDialogWidget");
			return ret;
		}
	};

}
