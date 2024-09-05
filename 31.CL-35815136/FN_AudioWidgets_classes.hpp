#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioWidgets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioWidgets.AudioMaterialButton
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x200 - 0x158)
	class UAudioMaterialButton : public UWidget	
	{
	public:
		FAudioMaterialButtonStyle WidgetStyle; // 0x158(0x80)
		FMulticastInlineDelegate OnButtonPressedChangedEvent; // 0x1D8(0x10)
		bool bIsPressed; // 0x1E8(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x1E9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialButton");
			return ret;
		}

		void SetIsPressed(bool InPressed); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC16B20(relative to base address)
		bool GetIsPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC1630C(relative to base address)
	};


	// Class AudioWidgets.AudioMaterialEnvelope
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x88 (0x1E0 - 0x158)
	class UAudioMaterialEnvelope : public UWidget	
	{
	public:
		FAudioMaterialEnvelopeStyle WidgetStyle; // 0x158(0x50)
		FAudioMaterialEnvelopeSettings EnvelopeSettings; // 0x1A8(0x24)
		unsigned char UnknownData00_7[0x14]; // 0x1CC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialEnvelope");
			return ret;
		}
	};


	// Class AudioWidgets.AudioMaterialKnob
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x330 - 0x158)
	class UAudioMaterialKnob : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FAudioMaterialKnobStyle WidgetStyle; // 0x160(0x190)
		FMulticastInlineDelegate OnKnobValueChanged; // 0x2F0(0x10)
		float Value; // 0x300(0x4)
		float TuneSpeed; // 0x304(0x4)
		float FineTuneSpeed; // 0x308(0x4)
		bool bLocked; // 0x30C(0x1)
		bool bMouseUsesStep; // 0x30D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x30E(0x2) UNKNOWN PROPERTY
		float StepSize; // 0x310(0x4)
		unsigned char UnknownData02_7[0x1C]; // 0x314(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialKnob");
			return ret;
		}

		void SetValue(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18638(relative to base address)
		void SetTuneSpeed(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC182E8(relative to base address)
		void SetStepSize(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC17F90(relative to base address)
		void SetMouseUsesStep(bool InUsesStep); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC17510(relative to base address)
		void SetLocked(bool InLocked); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC16BC0(relative to base address)
		void SetFineTuneSpeed(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC16904(relative to base address)
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D097F08(relative to base address)
		float GetTuneSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC166A4(relative to base address)
		float GetStepSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC16674(relative to base address)
		bool GetMouseUsesStep(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC1647C(relative to base address)
		bool GetIsLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC162DC(relative to base address)
		float GetFineTuneSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC162AC(relative to base address)
	};


	// Class AudioWidgets.AudioMaterialMeter
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x120 (0x278 - 0x158)
	class UAudioMaterialMeter : public UWidget	
	{
	public:
		FAudioMaterialMeterStyle WidgetStyle; // 0x158(0xF0)
		TEnumAsByte<EOrientation> orientation; // 0x248(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x249(0x3) UNKNOWN PROPERTY
		FDelegateProperty MeterChannelInfoDelegate; // 0x24C(0xC)
		unsigned char UnknownData01_6[0x10]; // 0x258(0x10) UNKNOWN PROPERTY
		TArray<FMeterChannelInfo> MeterChannelInfo; // 0x268(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialMeter");
			return ret;
		}

		void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC16E08(relative to base address)
		TArray GetMeterChannelInfo__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetMeterChannelInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC163B4(relative to base address)
	};


	// Class AudioWidgets.AudioMaterialSlider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x198 (0x2F0 - 0x158)
	class UAudioMaterialSlider : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FAudioMaterialSliderStyle WidgetStyle; // 0x160(0x150)
		FMulticastInlineDelegate OnValueChanged; // 0x2B0(0x10)
		float Value; // 0x2C0(0x4)
		TEnumAsByte<EOrientation> orientation; // 0x2C4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2C5(0x3) UNKNOWN PROPERTY
		float TuneSpeed; // 0x2C8(0x4)
		float FineTuneSpeed; // 0x2CC(0x4)
		bool bLocked; // 0x2D0(0x1)
		bool bMouseUsesStep; // 0x2D1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2D2(0x2) UNKNOWN PROPERTY
		float StepSize; // 0x2D4(0x4)
		unsigned char UnknownData03_7[0x18]; // 0x2D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialSlider");
			return ret;
		}

		void SetValue(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC186B8(relative to base address)
		void SetTuneSpeed(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18368(relative to base address)
		void SetStepSize(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18010(relative to base address)
		void SetMouseUsesStep(bool bInUsesStep); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC175A8(relative to base address)
		void SetLocked(bool bInLocked); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC16C58(relative to base address)
		void SetFineTuneSpeed(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC16984(relative to base address)
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE48(relative to base address)
		float GetTuneSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC166BC(relative to base address)
		float GetStepSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC1668C(relative to base address)
		bool GetMouseUsesStep(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC16494(relative to base address)
		bool GetIsLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC162F4(relative to base address)
		float GetFineTuneSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC162C4(relative to base address)
	};


	// Class AudioWidgets.AudioMaterialKnobWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x190 (0x1C0 - 0x30)
	class UAudioMaterialKnobWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FAudioMaterialKnobStyle KnobStyle; // 0x30(0x190)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialKnobWidgetStyle");
			return ret;
		}
	};


	// Class AudioWidgets.AudioMaterialMeterWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0xF0 (0x120 - 0x30)
	class UAudioMaterialMeterWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FAudioMaterialMeterStyle MeterStyle; // 0x30(0xF0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialMeterWidgetStyle");
			return ret;
		}
	};


	// Class AudioWidgets.AudioMaterialButtonWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UAudioMaterialButtonWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FAudioMaterialButtonStyle ButtonStyle; // 0x30(0x80)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialButtonWidgetStyle");
			return ret;
		}
	};


	// Class AudioWidgets.AudioMaterialSliderWidgetStyle
	// Inherited from USlateWidgetStyleContainerBase -> UObject
	// Size: 0x150 (0x180 - 0x30)
	class UAudioMaterialSliderWidgetStyle : public USlateWidgetStyleContainerBase	
	{
	public:
		FAudioMaterialSliderStyle SliderStyle; // 0x30(0x150)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialSliderWidgetStyle");
			return ret;
		}
	};


	// Class AudioWidgets.AudioMeter
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x4E8 (0x640 - 0x158)
	class UAudioMeter : public UWidget	
	{
	public:
		TArray<FMeterChannelInfo> MeterChannelInfo; // 0x158(0x10)
		FDelegateProperty MeterChannelInfoDelegate; // 0x168(0xC)
		unsigned char UnknownData00_6[0xC]; // 0x174(0xC) UNKNOWN PROPERTY
		FAudioMeterStyle WidgetStyle; // 0x180(0x430)
		TEnumAsByte<EOrientation> orientation; // 0x5B0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5B1(0x3) UNKNOWN PROPERTY
		FLinearColor BackgroundColor; // 0x5B4(0x10)
		FLinearColor MeterBackgroundColor; // 0x5C4(0x10)
		FLinearColor MeterValueColor; // 0x5D4(0x10)
		FLinearColor MeterPeakColor; // 0x5E4(0x10)
		FLinearColor MeterClippingColor; // 0x5F4(0x10)
		FLinearColor MeterScaleColor; // 0x604(0x10)
		FLinearColor MeterScaleLabelColor; // 0x614(0x10)
		unsigned char UnknownData02_7[0x1C]; // 0x624(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMeter");
			return ret;
		}

		void SetMeterValueColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC173F8(relative to base address)
		void SetMeterScaleLabelColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC172E0(relative to base address)
		void SetMeterScaleColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC171C8(relative to base address)
		void SetMeterPeakColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC170B0(relative to base address)
		void SetMeterClippingColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC16F98(relative to base address)
		void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC16ED0(relative to base address)
		void SetMeterBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC16CF0(relative to base address)
		void SetBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC166D4(relative to base address)
		TArray GetMeterChannelInfo__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetMeterChannelInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC16418(relative to base address)
	};


	// Class AudioWidgets.AudioOscilloscope
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x4C8 (0x620 - 0x158)
	class UAudioOscilloscope : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FAudioOscilloscopePanelStyle OscilloscopeStyle; // 0x160(0x440)
		UAudioBus* AudioBus; // 0x5A0(0x8)
		float MaxTimeWindowMs; // 0x5A8(0x4)
		float TimeWindowMs; // 0x5AC(0x4)
		float AnalysisPeriodMs; // 0x5B0(0x4)
		bool bShowTimeGrid; // 0x5B4(0x1)
		EXAxisLabelsUnit TimeGridLabelsUnit; // 0x5B5(0x1)
		bool bShowAmplitudeGrid; // 0x5B6(0x1)
		bool bShowAmplitudeLabels; // 0x5B7(0x1)
		EYAxisLabelsUnit AmplitudeGridLabelsUnit; // 0x5B8(0x1)
		EAudioOscilloscopeTriggerMode TriggerMode; // 0x5B9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x5BA(0x2) UNKNOWN PROPERTY
		float TriggerThreshold; // 0x5BC(0x4)
		EAudioPanelLayoutType PanelLayoutType; // 0x5C0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5C1(0x3) UNKNOWN PROPERTY
		int32_t ChannelToAnalyze; // 0x5C4(0x4)
		unsigned char UnknownData03_7[0x58]; // 0x5C8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioOscilloscope");
			return ret;
		}

		void StopProcessing(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18A44(relative to base address)
		void StartProcessing(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC189F4(relative to base address)
		TArray GetOscilloscopeAudioSamples__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanTriggeringBeSet(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74DC1628C(relative to base address)
	};


	// Class AudioWidgets.AudioRadialSlider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x1F8 (0x350 - 0x158)
	class UAudioRadialSlider : public UWidget	
	{
	public:
		float Value; // 0x158(0x4)
		FDelegateProperty ValueDelegate; // 0x15C(0xC)
		TEnumAsByte<EAudioRadialSliderLayout> WidgetLayout; // 0x168(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x169(0x3) UNKNOWN PROPERTY
		FLinearColor CenterBackgroundColor; // 0x16C(0x10)
		FLinearColor SliderProgressColor; // 0x17C(0x10)
		FLinearColor SliderBarColor; // 0x18C(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FVector2D HandStartEndRatio; // 0x1A0(0x10)
		FText UnitsText; // 0x1B0(0x10)
		FLinearColor TextLabelBackgroundColor; // 0x1C0(0x10)
		bool ShowLabelOnlyOnHover; // 0x1D0(0x1)
		bool ShowUnitsText; // 0x1D1(0x1)
		bool IsUnitsTextReadOnly; // 0x1D2(0x1)
		bool IsValueTextReadOnly; // 0x1D3(0x1)
		float SliderThickness; // 0x1D4(0x4)
		FVector2D OutputRange; // 0x1D8(0x10)
		FMulticastInlineDelegate OnValueChanged; // 0x1E8(0x10)
		unsigned char UnknownData02_7[0x158]; // 0x1F8(0x158) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioRadialSlider");
			return ret;
		}

		void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18970(relative to base address)
		void SetValueTextReadOnly(bool bIsReadOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18738(relative to base address)
		void SetUnitsTextReadOnly(bool bIsReadOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18520(relative to base address)
		void SetUnitsText(FText Units); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC183E8(relative to base address)
		void SetTextLabelBackgroundColor(FSlateColor InColor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18090(relative to base address)
		void SetSliderThickness(float InThickness); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC17DF0(relative to base address)
		void SetSliderProgressColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC17CD8(relative to base address)
		void SetSliderBarColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC17AA8(relative to base address)
		void SetShowUnitsText(bool bShowUnitsText); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC17878(relative to base address)
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC17758(relative to base address)
		void SetOutputRange(FVector2D InOutputRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC17640(relative to base address)
		void SetHandStartEndRatio(FVector2D InHandStartEndRatio); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC16A04(relative to base address)
		void SetCenterBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC167EC(relative to base address)
		float GetSliderValue(float OutputValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC165DC(relative to base address)
		float GetOutputValue(float InSliderValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC164AC(relative to base address)
	};


	// Class AudioWidgets.AudioVolumeRadialSlider
	// Inherited from UAudioRadialSlider -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x350 - 0x350)
	class UAudioVolumeRadialSlider : public UAudioRadialSlider	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioVolumeRadialSlider");
			return ret;
		}
	};


	// Class AudioWidgets.AudioFrequencyRadialSlider
	// Inherited from UAudioRadialSlider -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x350 - 0x350)
	class UAudioFrequencyRadialSlider : public UAudioRadialSlider	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioFrequencyRadialSlider");
			return ret;
		}
	};


	// Class AudioWidgets.AudioSliderBase
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x728 (0x880 - 0x158)
	class UAudioSliderBase : public UWidget	
	{
	public:
		float Value; // 0x158(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x15C(0x4) UNKNOWN PROPERTY
		FText UnitsText; // 0x160(0x10)
		FLinearColor TextLabelBackgroundColor; // 0x170(0x10)
		FDelegateProperty TextLabelBackgroundColorDelegate; // 0x180(0xC)
		bool ShowLabelOnlyOnHover; // 0x18C(0x1)
		bool ShowUnitsText; // 0x18D(0x1)
		bool IsUnitsTextReadOnly; // 0x18E(0x1)
		bool IsValueTextReadOnly; // 0x18F(0x1)
		FDelegateProperty ValueDelegate; // 0x190(0xC)
		FLinearColor SliderBackgroundColor; // 0x19C(0x10)
		FDelegateProperty SliderBackgroundColorDelegate; // 0x1AC(0xC)
		FLinearColor SliderBarColor; // 0x1B8(0x10)
		FDelegateProperty SliderBarColorDelegate; // 0x1C8(0xC)
		FLinearColor SliderThumbColor; // 0x1D4(0x10)
		FDelegateProperty SliderThumbColorDelegate; // 0x1E4(0xC)
		FLinearColor WidgetBackgroundColor; // 0x1F0(0x10)
		FDelegateProperty WidgetBackgroundColorDelegate; // 0x200(0xC)
		TEnumAsByte<EOrientation> orientation; // 0x20C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x20D(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnValueChanged; // 0x210(0x10)
		unsigned char UnknownData02_7[0x660]; // 0x220(0x660) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioSliderBase");
			return ret;
		}

		void SetWidgetBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC18858(relative to base address)
		void SetValueTextReadOnly(bool bIsReadOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC187C8(relative to base address)
		void SetUnitsTextReadOnly(bool bIsReadOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC185AC(relative to base address)
		void SetUnitsText(FText Units); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18484(relative to base address)
		void SetTextLabelBackgroundColor(FSlateColor InColor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC181BC(relative to base address)
		void SetSliderThumbColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC17E78(relative to base address)
		void SetSliderBarColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC17BC0(relative to base address)
		void SetSliderBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC17990(relative to base address)
		void SetShowUnitsText(bool bShowUnitsText); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC17904(relative to base address)
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC177E8(relative to base address)
		float GetSliderValue(float OutputValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC16324(relative to base address)
		float GetOutputValue(float InSliderValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC16544(relative to base address)
		float GetLinValue(float OutputValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC16324(relative to base address)
	};


	// Class AudioWidgets.AudioSlider
	// Inherited from UAudioSliderBase -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x890 - 0x880)
	class UAudioSlider : public UAudioSliderBase	
	{
	public:
		TWeakObjectPtr<UCurveFloat*> LinToOutputCurve; // 0x880(0x8)
		TWeakObjectPtr<UCurveFloat*> OutputToLinCurve; // 0x888(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioSlider");
			return ret;
		}
	};


	// Class AudioWidgets.AudioVolumeSlider
	// Inherited from UAudioSlider -> UAudioSliderBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x890 - 0x890)
	class UAudioVolumeSlider : public UAudioSlider	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioVolumeSlider");
			return ret;
		}
	};


	// Class AudioWidgets.AudioFrequencySlider
	// Inherited from UAudioSliderBase -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x890 - 0x880)
	class UAudioFrequencySlider : public UAudioSliderBase	
	{
	public:
		FVector2D OutputRange; // 0x880(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioFrequencySlider");
			return ret;
		}
	};


	// Class AudioWidgets.AudioVectorscope
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x208 (0x360 - 0x158)
	class UAudioVectorscope : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FAudioVectorscopePanelStyle VectorscopeStyle; // 0x160(0x190)
		UAudioBus* AudioBus; // 0x2F0(0x8)
		bool bShowGrid; // 0x2F8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2F9(0x3) UNKNOWN PROPERTY
		int32_t GridDivisions; // 0x2FC(0x4)
		float MaxDisplayPersistenceMs; // 0x300(0x4)
		float DisplayPersistenceMs; // 0x304(0x4)
		float Scale; // 0x308(0x4)
		EAudioPanelLayoutType PanelLayoutType; // 0x30C(0x1)
		unsigned char UnknownData02_7[0x53]; // 0x30D(0x53) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioVectorscope");
			return ret;
		}

		void StopProcessing(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18A6C(relative to base address)
		void StartProcessing(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC18A1C(relative to base address)
		TArray GetVectorscopeAudioSamples__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
