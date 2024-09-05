#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioWidgets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/AudioWidgets.EAudioPanelLayoutType
	enum EAudioPanelLayoutType
	{
		EAudioPanelLayoutType__Basic = 0,
		EAudioPanelLayoutType__Advanced = 1,
	};


	// Enum /Script/AudioWidgets.EAudioOscilloscopeTriggerMode
	enum EAudioOscilloscopeTriggerMode
	{
		EAudioOscilloscopeTriggerMode__None = 0,
		EAudioOscilloscopeTriggerMode__Rising = 1,
		EAudioOscilloscopeTriggerMode__Falling = 2,
	};


	// Enum /Script/AudioWidgets.EYAxisLabelsUnit
	enum EYAxisLabelsUnit
	{
		EYAxisLabelsUnit__Linear = 0,
		EYAxisLabelsUnit__Db = 1,
	};


	// Enum /Script/AudioWidgets.EXAxisLabelsUnit
	enum EXAxisLabelsUnit
	{
		EXAxisLabelsUnit__Samples = 0,
		EXAxisLabelsUnit__Seconds = 1,
	};


	// Enum /Script/AudioWidgets.EAudioColorGradient
	enum EAudioColorGradient
	{
		EAudioColorGradient__BlackToWhite = 0,
		EAudioColorGradient__WhiteToBlack = 1,
	};


	// Enum /Script/AudioWidgets.EAudioMaterialEnvelopeType
	enum EAudioMaterialEnvelopeType
	{
		EAudioMaterialEnvelopeType__AD = 0,
		EAudioMaterialEnvelopeType__ADSR = 1,
	};


	// Enum /Script/AudioWidgets.EAudioSpectrogramFrequencyAxisScale
	enum EAudioSpectrogramFrequencyAxisScale
	{
		EAudioSpectrogramFrequencyAxisScale__Linear = 0,
		EAudioSpectrogramFrequencyAxisScale__Logarithmic = 1,
	};


	// Enum /Script/AudioWidgets.EAudioSpectrogramFrequencyAxisPixelBucketMode
	enum EAudioSpectrogramFrequencyAxisPixelBucketMode
	{
		EAudioSpectrogramFrequencyAxisPixelBucketMode__Sample = 0,
		EAudioSpectrogramFrequencyAxisPixelBucketMode__Peak = 1,
		EAudioSpectrogramFrequencyAxisPixelBucketMode__Average = 2,
	};


	// Enum /Script/AudioWidgets.EAudioSpectrumAnalyzerType
	enum EAudioSpectrumAnalyzerType
	{
		EAudioSpectrumAnalyzerType__FFT = 0,
		EAudioSpectrumAnalyzerType__CQT = 1,
	};


	// Enum /Script/AudioWidgets.EAudioUnitsValueType
	enum EAudioUnitsValueType
	{
		EAudioUnitsValueType__Linear = 0,
		EAudioUnitsValueType__Frequency = 1,
		EAudioUnitsValueType__Volume = 2,
	};


	// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
	enum EAudioRadialSliderLayout
	{
		Layout_LabelTop = 0,
		Layout_LabelCenter = 1,
		Layout_LabelBottom = 2,
	};


	// Enum /Script/AudioWidgets.EAudioSpectrumPlotTilt
	enum EAudioSpectrumPlotTilt
	{
		EAudioSpectrumPlotTilt__NoTilt = 0,
		EAudioSpectrumPlotTilt__Plus1_5dBPerOctave = 1,
		EAudioSpectrumPlotTilt__Plus3dBPerOctave = 2,
		EAudioSpectrumPlotTilt__Plus4_5dBPerOctave = 3,
		EAudioSpectrumPlotTilt__Plus6dBPerOctave = 4,
	};


	// Enum /Script/AudioWidgets.EAudioSpectrumPlotFrequencyAxisScale
	enum EAudioSpectrumPlotFrequencyAxisScale
	{
		EAudioSpectrumPlotFrequencyAxisScale__Linear = 0,
		EAudioSpectrumPlotFrequencyAxisScale__Logarithmic = 1,
	};


	// Enum /Script/AudioWidgets.EAudioSpectrumPlotFrequencyAxisPixelBucketMode
	enum EAudioSpectrumPlotFrequencyAxisPixelBucketMode
	{
		EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Sample = 0,
		EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Peak = 1,
		EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Average = 2,
	};

}
