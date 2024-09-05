#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioWidgets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioWidgets.AudioMaterialButton
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x208 - 0x160)
	class UAudioMaterialButton : public UWidget	
	{
	public:
		FAudioMaterialButtonStyle WidgetStyle; // 0x160(0x80)
		FMulticastInlineDelegate OnButtonPressedChangedEvent; // 0x1E0(0x10)
		bool bIsPressed; // 0x1F0(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x1F1(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialButton");
			return ret;
		}

		void SetIsPressed(bool InPressed); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414645298
		bool GetIsPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146451B8
	};


	// Class AudioWidgets.AudioMaterialEnvelope
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x88 (0x1E8 - 0x160)
	class UAudioMaterialEnvelope : public UWidget	
	{
	public:
		FAudioMaterialEnvelopeStyle WidgetStyle; // 0x160(0x50)
		FAudioMaterialEnvelopeSettings EnvelopeSettings; // 0x1B0(0x24)
		unsigned char UnknownData01_7[0x14]; // 0x1D4(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialEnvelope");
			return ret;
		}
	};


	// Class AudioWidgets.AudioMaterialKnob
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x1D0 (0x330 - 0x160)
	class UAudioMaterialKnob : public UWidget	
	{
	public:
		FAudioMaterialKnobStyle WidgetStyle; // 0x160(0x190)
		FMulticastInlineDelegate OnKnobValueChanged; // 0x2F0(0x10)
		float Value; // 0x300(0x4)
		float TuneSpeed; // 0x304(0x4)
		float FineTuneSpeed; // 0x308(0x4)
		bool bLocked; // 0x30C(0x1)
		bool bMouseUsesStep; // 0x30D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x30E(0x2) UNKNOWN PROPERTY
		float StepSize; // 0x310(0x4)
		unsigned char UnknownData03_7[0x1C]; // 0x314(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialKnob");
			return ret;
		}

		void SetValue(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414645D18
		void SetTuneSpeed(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414645C38
		void SetStepSize(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414645B58
		void SetMouseUsesStep(bool InUsesStep); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414645A78
		void SetLocked(bool InLocked); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414645998
		void SetFineTuneSpeed(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146458B8
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4146457D8
		float GetTuneSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146456F8
		float GetStepSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414645618
		bool GetMouseUsesStep(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414645538
		bool GetIsLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414645458
		float GetFineTuneSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414645378
	};


	// Class AudioWidgets.AudioMaterialMeter
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x120 (0x280 - 0x160)
	class UAudioMaterialMeter : public UWidget	
	{
	public:
		FAudioMaterialMeterStyle WidgetStyle; // 0x160(0xF0)
		TEnumAsByte orientation; // 0x250(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x251(0x3) UNKNOWN PROPERTY
		FDelegateProperty MeterChannelInfoDelegate; // 0x254(0xC)
		unsigned char UnknownData03_6[0x10]; // 0x260(0x10) UNKNOWN PROPERTY
		TArray MeterChannelInfo; // 0x270(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialMeter");
			return ret;
		}

		void SetMeterChannelInfo(TArray& InMeterChannelInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411FAA3B8
		TArray GetMeterChannelInfo__DelegateSignature(); // Flags: Public|Delegate 0x7FF411FAA2D8
		TArray GetMeterChannelInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411F8A138
	};


	// Class AudioWidgets.AudioMaterialSlider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x190 (0x2F0 - 0x160)
	class UAudioMaterialSlider : public UWidget	
	{
	public:
		FAudioMaterialSliderStyle WidgetStyle; // 0x160(0x150)
		FMulticastInlineDelegate OnValueChanged; // 0x2B0(0x10)
		float Value; // 0x2C0(0x4)
		TEnumAsByte orientation; // 0x2C4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x2C5(0x3) UNKNOWN PROPERTY
		float TuneSpeed; // 0x2C8(0x4)
		float FineTuneSpeed; // 0x2CC(0x4)
		bool bLocked; // 0x2D0(0x1)
		bool bMouseUsesStep; // 0x2D1(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x2D2(0x2) UNKNOWN PROPERTY
		float StepSize; // 0x2D4(0x4)
		unsigned char UnknownData05_7[0x18]; // 0x2D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMaterialSlider");
			return ret;
		}

		void SetValue(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414646798
		void SetTuneSpeed(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146466B8
		void SetStepSize(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146465D8
		void SetMouseUsesStep(bool bInUsesStep); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146464F8
		void SetLocked(bool bInLocked); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414646418
		void SetFineTuneSpeed(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414646338
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414646258
		float GetTuneSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414646178
		float GetStepSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414646098
		bool GetMouseUsesStep(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414645FB8
		bool GetIsLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414645ED8
		float GetFineTuneSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414645DF8
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
	// Size: 0x4E0 (0x640 - 0x160)
	class UAudioMeter : public UWidget	
	{
	public:
		TArray MeterChannelInfo; // 0x160(0x10)
		FDelegateProperty MeterChannelInfoDelegate; // 0x170(0xC)
		unsigned char UnknownData03_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		FAudioMeterStyle WidgetStyle; // 0x180(0x430)
		TEnumAsByte orientation; // 0x5B0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x5B1(0x3) UNKNOWN PROPERTY
		FLinearColor BackgroundColor; // 0x5B4(0x10)
		FLinearColor MeterBackgroundColor; // 0x5C4(0x10)
		FLinearColor MeterValueColor; // 0x5D4(0x10)
		FLinearColor MeterPeakColor; // 0x5E4(0x10)
		FLinearColor MeterClippingColor; // 0x5F4(0x10)
		FLinearColor MeterScaleColor; // 0x604(0x10)
		FLinearColor MeterScaleLabelColor; // 0x614(0x10)
		unsigned char UnknownData05_7[0x1C]; // 0x624(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioMeter");
			return ret;
		}

		void SetMeterValueColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF411FAADF8
		void SetMeterScaleLabelColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF411FAAD18
		void SetMeterScaleColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF411FAAC38
		void SetMeterPeakColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF411FAAB58
		void SetMeterClippingColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF411FAAA78
		void SetMeterChannelInfo(TArray& InMeterChannelInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411FAA998
		void SetMeterBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF411FAA8B8
		void SetBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF411FAA7D8
		TArray GetMeterChannelInfo__DelegateSignature(); // Flags: Public|Delegate 0x7FF411FAA6F8
		TArray GetMeterChannelInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411FAA618
	};


	// Class AudioWidgets.AudioOscilloscope
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x4C0 (0x620 - 0x160)
	class UAudioOscilloscope : public UWidget	
	{
	public:
		FAudioOscilloscopePanelStyle OscilloscopeStyle; // 0x160(0x440)
		UAudioBus AudioBus; // 0x5A0(0x8)
		float MaxTimeWindowMs; // 0x5A8(0x4)
		float TimeWindowMs; // 0x5AC(0x4)
		float AnalysisPeriodMs; // 0x5B0(0x4)
		bool bShowTimeGrid; // 0x5B4(0x1)
		EXAxisLabelsUnit TimeGridLabelsUnit; // 0x5B5(0x1)
		bool bShowAmplitudeGrid; // 0x5B6(0x1)
		bool bShowAmplitudeLabels; // 0x5B7(0x1)
		EYAxisLabelsUnit AmplitudeGridLabelsUnit; // 0x5B8(0x1)
		EAudioOscilloscopeTriggerMode TriggerMode; // 0x5B9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x5BA(0x2) UNKNOWN PROPERTY
		float TriggerThreshold; // 0x5BC(0x4)
		EAudioPanelLayoutType PanelLayoutType; // 0x5C0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x5C1(0x3) UNKNOWN PROPERTY
		int32_t ChannelToAnalyze; // 0x5C4(0x4)
		unsigned char UnknownData05_7[0x58]; // 0x5C8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioOscilloscope");
			return ret;
		}

		void StopProcessing(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411FCB238
		void StartProcessing(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411FCB158
		TArray GetOscilloscopeAudioSamples__DelegateSignature(); // Flags: Public|Delegate 0x7FF411FCB078
		bool CanTriggeringBeSet(); // Flags: Final|Native|Private 0x7FF411FCAF98
	};


	// Class AudioWidgets.AudioRadialSlider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x1F0 (0x350 - 0x160)
	class UAudioRadialSlider : public UWidget	
	{
	public:
		float Value; // 0x160(0x4)
		FDelegateProperty ValueDelegate; // 0x164(0xC)
		TEnumAsByte WidgetLayout; // 0x170(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x171(0x3) UNKNOWN PROPERTY
		FLinearColor CenterBackgroundColor; // 0x174(0x10)
		FLinearColor SliderProgressColor; // 0x184(0x10)
		FLinearColor SliderBarColor; // 0x194(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FVector2D HandStartEndRatio; // 0x1A8(0x10)
		FText UnitsText; // 0x1B8(0x10)
		FLinearColor TextLabelBackgroundColor; // 0x1C8(0x10)
		bool ShowLabelOnlyOnHover; // 0x1D8(0x1)
		bool ShowUnitsText; // 0x1D9(0x1)
		bool IsUnitsTextReadOnly; // 0x1DA(0x1)
		bool IsValueTextReadOnly; // 0x1DB(0x1)
		float SliderThickness; // 0x1DC(0x4)
		FVector2D OutputRange; // 0x1E0(0x10)
		FMulticastInlineDelegate OnValueChanged; // 0x1F0(0x10)
		unsigned char UnknownData05_7[0x150]; // 0x200(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioRadialSlider");
			return ret;
		}

		void SetWidgetLayout(TEnumAsByte InLayout); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146474B8
		void SetValueTextReadOnly(bool bIsReadOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146473D8
		void SetUnitsTextReadOnly(bool bIsReadOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146472F8
		void SetUnitsText(FText Units); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647218
		void SetTextLabelBackgroundColor(FSlateColor InColor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647138
		void SetSliderThickness(float InThickness); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647058
		void SetSliderProgressColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414646F78
		void SetSliderBarColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414646E98
		void SetShowUnitsText(bool bShowUnitsText); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414646DB8
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414646CD8
		void SetOutputRange(FVector2D InOutputRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414646BF8
		void SetHandStartEndRatio(FVector2D InHandStartEndRatio); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414646B18
		void SetCenterBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414646A38
		float GetSliderValue(float OutputValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414646958
		float GetOutputValue(float InSliderValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414646878
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
	// Size: 0x730 (0x890 - 0x160)
	class UAudioSliderBase : public UWidget	
	{
	public:
		float Value; // 0x160(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		FText UnitsText; // 0x168(0x10)
		FLinearColor TextLabelBackgroundColor; // 0x178(0x10)
		FDelegateProperty TextLabelBackgroundColorDelegate; // 0x188(0xC)
		bool ShowLabelOnlyOnHover; // 0x194(0x1)
		bool ShowUnitsText; // 0x195(0x1)
		bool IsUnitsTextReadOnly; // 0x196(0x1)
		bool IsValueTextReadOnly; // 0x197(0x1)
		FDelegateProperty ValueDelegate; // 0x198(0xC)
		FLinearColor SliderBackgroundColor; // 0x1A4(0x10)
		FDelegateProperty SliderBackgroundColorDelegate; // 0x1B4(0xC)
		FLinearColor SliderBarColor; // 0x1C0(0x10)
		FDelegateProperty SliderBarColorDelegate; // 0x1D0(0xC)
		FLinearColor SliderThumbColor; // 0x1DC(0x10)
		FDelegateProperty SliderThumbColorDelegate; // 0x1EC(0xC)
		FLinearColor WidgetBackgroundColor; // 0x1F8(0x10)
		FDelegateProperty WidgetBackgroundColorDelegate; // 0x208(0xC)
		TEnumAsByte orientation; // 0x214(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x215(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnValueChanged; // 0x218(0x10)
		unsigned char UnknownData05_7[0x668]; // 0x228(0x668) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioSliderBase");
			return ret;
		}

		void SetWidgetBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414648018
		void SetValueTextReadOnly(bool bIsReadOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647F38
		void SetUnitsTextReadOnly(bool bIsReadOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647E58
		void SetUnitsText(FText Units); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647D78
		void SetTextLabelBackgroundColor(FSlateColor InColor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647C98
		void SetSliderThumbColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414647BB8
		void SetSliderBarColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414647AD8
		void SetSliderBackgroundColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146479F8
		void SetShowUnitsText(bool bShowUnitsText); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647918
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647838
		float GetSliderValue(float OutputValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647758
		float GetOutputValue(float InSliderValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647678
		float GetLinValue(float OutputValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414647598
	};


	// Class AudioWidgets.AudioSlider
	// Inherited from UAudioSliderBase -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x8A0 - 0x890)
	class UAudioSlider : public UAudioSliderBase	
	{
	public:
		TWeakObjectPtr LinToOutputCurve; // 0x890(0x8)
		TWeakObjectPtr OutputToLinCurve; // 0x898(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioSlider");
			return ret;
		}
	};


	// Class AudioWidgets.AudioVolumeSlider
	// Inherited from UAudioSlider -> UAudioSliderBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x8A0 - 0x8A0)
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
	// Size: 0x10 (0x8A0 - 0x890)
	class UAudioFrequencySlider : public UAudioSliderBase	
	{
	public:
		FVector2D OutputRange; // 0x890(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioFrequencySlider");
			return ret;
		}
	};


	// Class AudioWidgets.AudioVectorscope
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x200 (0x360 - 0x160)
	class UAudioVectorscope : public UWidget	
	{
	public:
		FAudioVectorscopePanelStyle VectorscopeStyle; // 0x160(0x190)
		UAudioBus AudioBus; // 0x2F0(0x8)
		bool bShowGrid; // 0x2F8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2F9(0x3) UNKNOWN PROPERTY
		int32_t GridDivisions; // 0x2FC(0x4)
		float MaxDisplayPersistenceMs; // 0x300(0x4)
		float DisplayPersistenceMs; // 0x304(0x4)
		float Scale; // 0x308(0x4)
		EAudioPanelLayoutType PanelLayoutType; // 0x30C(0x1)
		unsigned char UnknownData03_7[0x53]; // 0x30D(0x53) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioWidgets.AudioVectorscope");
			return ret;
		}

		void StopProcessing(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41200BA38
		void StartProcessing(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41200B958
		TArray GetVectorscopeAudioSamples__DelegateSignature(); // Flags: Public|Delegate 0x7FF41200B878
	};

}
