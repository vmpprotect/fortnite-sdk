#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioWidgets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AudioWidgets.MeterChannelInfo
	// Size: 0xC (0xC - 0x0)
	struct FMeterChannelInfo	
	{
	public:
		float MeterValue; // 0x0(0x4)
		float PeakValue; // 0x4(0x4)
		float ClippingValue; // 0x8(0x4)
	};


	// Struct AudioWidgets.AudioMaterialWidgetStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x18 (0x20 - 0x8)
	struct FAudioMaterialWidgetStyle : public FSlateWidgetStyle	
	{
	public:
		UMaterialInterface Material; // 0x8(0x8)
		FVector2f DesiredSize; // 0x10(0x8)
		UMaterialInstanceDynamic DynamicMaterial; // 0x18(0x8)
	};


	// Struct AudioWidgets.AudioMaterialMeterStyle
	// Inherited from FAudioMaterialWidgetStyle -> FSlateWidgetStyle
	// Size: 0xD0 (0xF0 - 0x20)
	struct FAudioMaterialMeterStyle : public FAudioMaterialWidgetStyle	
	{
	public:
		FLinearColor MeterFillMinColor; // 0x20(0x10)
		FLinearColor MeterFillMidColor; // 0x30(0x10)
		FLinearColor MeterFillMaxColor; // 0x40(0x10)
		FLinearColor MeterOffFillColor; // 0x50(0x10)
		FVector2D MeterPadding; // 0x60(0x10)
		FVector2D ValueRangeDb; // 0x70(0x10)
		bool bShowScale; // 0x80(0x1)
		bool bScaleSide; // 0x81(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x82(0x2) UNKNOWN PROPERTY
		float ScaleHashOffset; // 0x84(0x4)
		float ScaleHashWidth; // 0x88(0x4)
		float ScaleHashHeight; // 0x8C(0x4)
		int32_t DecibelsPerHash; // 0x90(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FSlateFontInfo Font; // 0x98(0x58)
	};


	// Struct AudioWidgets.AudioMeterStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x428 (0x430 - 0x8)
	struct FAudioMeterStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush MeterValueImage; // 0x10(0xB0)
		FSlateBrush BackgroundImage; // 0xC0(0xB0)
		FSlateBrush MeterBackgroundImage; // 0x170(0xB0)
		FSlateBrush MeterValueBackgroundImage; // 0x220(0xB0)
		FSlateBrush MeterPeakImage; // 0x2D0(0xB0)
		FVector2D MeterSize; // 0x380(0x10)
		FVector2D MeterPadding; // 0x390(0x10)
		float MeterValuePadding; // 0x3A0(0x4)
		float PeakValueWidth; // 0x3A4(0x4)
		FVector2D ValueRangeDb; // 0x3A8(0x10)
		bool bShowScale; // 0x3B8(0x1)
		bool bScaleSide; // 0x3B9(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x3BA(0x2) UNKNOWN PROPERTY
		float ScaleHashOffset; // 0x3BC(0x4)
		float ScaleHashWidth; // 0x3C0(0x4)
		float ScaleHashHeight; // 0x3C4(0x4)
		int32_t DecibelsPerHash; // 0x3C8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		FSlateFontInfo Font; // 0x3D0(0x58)
		unsigned char UnknownData07_7[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
	};


	// Struct AudioWidgets.AudioOscilloscopePanelStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x438 (0x440 - 0x8)
	struct FAudioOscilloscopePanelStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FFixedSampleSequenceRulerStyle TimeRulerStyle; // 0x10(0x230)
		FSampledSequenceValueGridOverlayStyle ValueGridStyle; // 0x240(0x98)
		unsigned char UnknownData04_6[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		FSampledSequenceViewerStyle WaveViewerStyle; // 0x2E0(0x140)
		FTriggerThresholdLineStyle TriggerThresholdLineStyle; // 0x420(0x18)
		unsigned char UnknownData05_7[0x8]; // 0x438(0x8) UNKNOWN PROPERTY
	};


	// Struct AudioWidgets.TriggerThresholdLineStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x10 (0x18 - 0x8)
	struct FTriggerThresholdLineStyle : public FSlateWidgetStyle	
	{
	public:
		FLinearColor LineColor; // 0x8(0x10)
	};


	// Struct AudioWidgets.SampledSequenceViewerStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x138 (0x140 - 0x8)
	struct FSampledSequenceViewerStyle : public FSlateWidgetStyle	
	{
	public:
		FSlateColor SequenceColor; // 0x8(0x14)
		float SequenceLineThickness; // 0x1C(0x4)
		FSlateColor MajorGridLineColor; // 0x20(0x14)
		FSlateColor MinorGridLineColor; // 0x34(0x14)
		FSlateColor ZeroCrossingLineColor; // 0x48(0x14)
		float ZeroCrossingLineThickness; // 0x5C(0x4)
		float SampleMarkersSize; // 0x60(0x4)
		FSlateColor SequenceBackgroundColor; // 0x64(0x14)
		unsigned char UnknownData02_6[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x80(0xB0)
		float DesiredWidth; // 0x130(0x4)
		float DesiredHeight; // 0x134(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x138(0x8) UNKNOWN PROPERTY
	};


	// Struct AudioWidgets.SampledSequenceValueGridOverlayStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x90 (0x98 - 0x8)
	struct FSampledSequenceValueGridOverlayStyle : public FSlateWidgetStyle	
	{
	public:
		FSlateColor GridColor; // 0x8(0x14)
		float GridThickness; // 0x1C(0x4)
		FSlateColor LabelTextColor; // 0x20(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FSlateFontInfo LabelTextFont; // 0x38(0x58)
		float DesiredWidth; // 0x90(0x4)
		float DesiredHeight; // 0x94(0x4)
	};


	// Struct AudioWidgets.FixedSampleSequenceRulerStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x228 (0x230 - 0x8)
	struct FFixedSampleSequenceRulerStyle : public FSlateWidgetStyle	
	{
	public:
		float HandleWidth; // 0x8(0x4)
		FSlateColor HandleColor; // 0xC(0x14)
		FSlateBrush HandleBrush; // 0x20(0xB0)
		FSlateColor TicksColor; // 0xD0(0x14)
		FSlateColor TicksTextColor; // 0xE4(0x14)
		FSlateFontInfo TicksTextFont; // 0xF8(0x58)
		float TicksTextOffset; // 0x150(0x4)
		FSlateColor BackgroundColor; // 0x154(0x14)
		unsigned char UnknownData02_6[0x8]; // 0x168(0x8) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x170(0xB0)
		float DesiredWidth; // 0x220(0x4)
		float DesiredHeight; // 0x224(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
	};


	// Struct AudioWidgets.AudioVectorscopePanelStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x188 (0x190 - 0x8)
	struct FAudioVectorscopePanelStyle : public FSlateWidgetStyle	
	{
	public:
		FSampledSequenceValueGridOverlayStyle ValueGridStyle; // 0x8(0x98)
		FSampledSequenceVectorViewerStyle VectorViewerStyle; // 0xA0(0xF0)
	};


	// Struct AudioWidgets.SampledSequenceVectorViewerStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xE8 (0xF0 - 0x8)
	struct FSampledSequenceVectorViewerStyle : public FSlateWidgetStyle	
	{
	public:
		FSlateColor BackgroundColor; // 0x8(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x20(0xB0)
		FLinearColor LineColor; // 0xD0(0x10)
		float LineThickness; // 0xE0(0x4)
		unsigned char UnknownData03_7[0xC]; // 0xE4(0xC) UNKNOWN PROPERTY
	};


	// Struct AudioWidgets.AudioMaterialEnvelopeSettings
	// Size: 0x24 (0x24 - 0x0)
	struct FAudioMaterialEnvelopeSettings	
	{
	public:
		EAudioMaterialEnvelopeType EnvelopeType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float AttackCurve; // 0x4(0x4)
		float AttackValue; // 0x8(0x4)
		float AttackTime; // 0xC(0x4)
		float DecayCurve; // 0x10(0x4)
		float DecayTime; // 0x14(0x4)
		float SustainValue; // 0x18(0x4)
		float ReleaseCurve; // 0x1C(0x4)
		float ReleaseTime; // 0x20(0x4)
	};


	// Struct AudioWidgets.AudioMaterialButtonStyle
	// Inherited from FAudioMaterialWidgetStyle -> FSlateWidgetStyle
	// Size: 0x60 (0x80 - 0x20)
	struct FAudioMaterialButtonStyle : public FAudioMaterialWidgetStyle	
	{
	public:
		FLinearColor ButtonMainColor; // 0x20(0x10)
		FLinearColor ButtonShadowColor; // 0x30(0x10)
		FLinearColor ButtonAccentColor; // 0x40(0x10)
		FLinearColor ButtonPressedMainColor; // 0x50(0x10)
		FLinearColor ButtonPressedShadowColor; // 0x60(0x10)
		FLinearColor ButtonPressedOutlineColor; // 0x70(0x10)
	};


	// Struct AudioWidgets.AudioMaterialSliderStyle
	// Inherited from FAudioMaterialWidgetStyle -> FSlateWidgetStyle
	// Size: 0x130 (0x150 - 0x20)
	struct FAudioMaterialSliderStyle : public FAudioMaterialWidgetStyle	
	{
	public:
		FLinearColor BarMainColor; // 0x20(0x10)
		FLinearColor BarShadowColor; // 0x30(0x10)
		FLinearColor BarAccentColor; // 0x40(0x10)
		FLinearColor HandleMainColor; // 0x50(0x10)
		FLinearColor HandleOutlineColor; // 0x60(0x10)
		FAudioTextBoxStyle TextBoxStyle; // 0x70(0xE0)
	};


	// Struct AudioWidgets.AudioTextBoxStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xD8 (0xE0 - 0x8)
	struct FAudioTextBoxStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush BackgroundImage; // 0x10(0xB0)
		FSlateColor BackgroundColor; // 0xC0(0x14)
		unsigned char UnknownData03_7[0xC]; // 0xD4(0xC) UNKNOWN PROPERTY
	};


	// Struct AudioWidgets.AudioMaterialKnobStyle
	// Inherited from FAudioMaterialWidgetStyle -> FSlateWidgetStyle
	// Size: 0x170 (0x190 - 0x20)
	struct FAudioMaterialKnobStyle : public FAudioMaterialWidgetStyle	
	{
	public:
		FLinearColor KnobMainColor; // 0x20(0x10)
		FLinearColor KnobAccentColor; // 0x30(0x10)
		FLinearColor KnobIndicatorColor; // 0x40(0x10)
		FLinearColor KnobBarColor; // 0x50(0x10)
		FLinearColor KnobBarShadowColor; // 0x60(0x10)
		FLinearColor KnobBarFillMinColor; // 0x70(0x10)
		FLinearColor KnobBarFillMidColor; // 0x80(0x10)
		FLinearColor KnobBarFillMaxColor; // 0x90(0x10)
		FLinearColor KnobBarFillTintColor; // 0xA0(0x10)
		FAudioTextBoxStyle TextBoxStyle; // 0xB0(0xE0)
	};


	// Struct AudioWidgets.AudioMaterialEnvelopeStyle
	// Inherited from FAudioMaterialWidgetStyle -> FSlateWidgetStyle
	// Size: 0x30 (0x50 - 0x20)
	struct FAudioMaterialEnvelopeStyle : public FAudioMaterialWidgetStyle	
	{
	public:
		FLinearColor CurveColor; // 0x20(0x10)
		FLinearColor BackgroundColor; // 0x30(0x10)
		FLinearColor OutlineColor; // 0x40(0x10)
	};


	// Struct AudioWidgets.AudioSpectrumPlotStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x118 (0x120 - 0x8)
	struct FAudioSpectrumPlotStyle : public FSlateWidgetStyle	
	{
	public:
		FSlateColor BackgroundColor; // 0x8(0x14)
		FSlateColor GridColor; // 0x1C(0x14)
		FSlateColor AxisLabelColor; // 0x30(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FSlateFontInfo AxisLabelFont; // 0x48(0x58)
		FSlateColor SpectrumColor; // 0xA0(0x14)
		FSlateColor CrosshairColor; // 0xB4(0x14)
		FSlateFontInfo CrosshairLabelFont; // 0xC8(0x58)
	};


	// Struct AudioWidgets.AudioSliderStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x648 (0x650 - 0x8)
	struct FAudioSliderStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSliderStyle SliderStyle; // 0x10(0x440)
		FAudioTextBoxStyle TextBoxStyle; // 0x450(0xE0)
		FSlateBrush WidgetBackgroundImage; // 0x530(0xB0)
		FSlateColor SliderBackgroundColor; // 0x5E0(0x14)
		unsigned char UnknownData04_6[0x4]; // 0x5F4(0x4) UNKNOWN PROPERTY
		FVector2D SliderBackgroundSize; // 0x5F8(0x10)
		float LabelPadding; // 0x608(0x4)
		FSlateColor SliderBarColor; // 0x60C(0x14)
		FSlateColor SliderThumbColor; // 0x620(0x14)
		FSlateColor WidgetBackgroundColor; // 0x634(0x14)
		unsigned char UnknownData05_7[0x8]; // 0x648(0x8) UNKNOWN PROPERTY
	};


	// Struct AudioWidgets.AudioRadialSliderStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x138 (0x140 - 0x8)
	struct FAudioRadialSliderStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FAudioTextBoxStyle TextBoxStyle; // 0x10(0xE0)
		FSlateColor CenterBackgroundColor; // 0xF0(0x14)
		FSlateColor SliderBarColor; // 0x104(0x14)
		FSlateColor SliderProgressColor; // 0x118(0x14)
		float LabelPadding; // 0x12C(0x4)
		float DefaultSliderRadius; // 0x130(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x134(0xC) UNKNOWN PROPERTY
	};


	// Struct AudioWidgets.PlayheadOverlayStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x20 (0x28 - 0x8)
	struct FPlayheadOverlayStyle : public FSlateWidgetStyle	
	{
	public:
		FSlateColor PlayheadColor; // 0x8(0x14)
		float PlayheadWidth; // 0x1C(0x4)
		float DesiredWidth; // 0x20(0x4)
		float DesiredHeight; // 0x24(0x4)
	};

}
