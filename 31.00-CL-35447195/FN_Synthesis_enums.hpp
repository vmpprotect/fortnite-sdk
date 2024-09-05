#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Synthesis
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Synthesis.ESynth1OscType
	enum ESynth1OscType
	{
		ESynth1OscType__Sine = 0,
		ESynth1OscType__Saw = 1,
		ESynth1OscType__Triangle = 2,
		ESynth1OscType__Square = 3,
		ESynth1OscType__Noise = 4,
		ESynth1OscType__Count = 5,
	};


	// Enum /Script/Synthesis.ESynthLFOType
	enum ESynthLFOType
	{
		ESynthLFOType__Sine = 0,
		ESynthLFOType__UpSaw = 1,
		ESynthLFOType__DownSaw = 2,
		ESynthLFOType__Square = 3,
		ESynthLFOType__Triangle = 4,
		ESynthLFOType__Exponential = 5,
		ESynthLFOType__RandomSampleHold = 6,
		ESynthLFOType__Count = 7,
	};


	// Enum /Script/Synthesis.ESynthLFOMode
	enum ESynthLFOMode
	{
		ESynthLFOMode__Sync = 0,
		ESynthLFOMode__OneShot = 1,
		ESynthLFOMode__Free = 2,
		ESynthLFOMode__Count = 3,
	};


	// Enum /Script/Synthesis.ESynthLFOPatchType
	enum ESynthLFOPatchType
	{
		ESynthLFOPatchType__PatchToNone = 0,
		ESynthLFOPatchType__PatchToGain = 1,
		ESynthLFOPatchType__PatchToOscFreq = 2,
		ESynthLFOPatchType__PatchToFilterFreq = 3,
		ESynthLFOPatchType__PatchToFilterQ = 4,
		ESynthLFOPatchType__PatchToOscPulseWidth = 5,
		ESynthLFOPatchType__PatchToOscPan = 6,
		ESynthLFOPatchType__PatchLFO1ToLFO2Frequency = 7,
		ESynthLFOPatchType__PatchLFO1ToLFO2Gain = 8,
		ESynthLFOPatchType__Count = 9,
	};


	// Enum /Script/Synthesis.ESynthModEnvPatch
	enum ESynthModEnvPatch
	{
		ESynthModEnvPatch__PatchToNone = 0,
		ESynthModEnvPatch__PatchToOscFreq = 1,
		ESynthModEnvPatch__PatchToFilterFreq = 2,
		ESynthModEnvPatch__PatchToFilterQ = 3,
		ESynthModEnvPatch__PatchToLFO1Gain = 4,
		ESynthModEnvPatch__PatchToLFO2Gain = 5,
		ESynthModEnvPatch__PatchToLFO1Freq = 6,
		ESynthModEnvPatch__PatchToLFO2Freq = 7,
		ESynthModEnvPatch__Count = 8,
	};


	// Enum /Script/Synthesis.ESynthModEnvBiasPatch
	enum ESynthModEnvBiasPatch
	{
		ESynthModEnvBiasPatch__PatchToNone = 0,
		ESynthModEnvBiasPatch__PatchToOscFreq = 1,
		ESynthModEnvBiasPatch__PatchToFilterFreq = 2,
		ESynthModEnvBiasPatch__PatchToFilterQ = 3,
		ESynthModEnvBiasPatch__PatchToLFO1Gain = 4,
		ESynthModEnvBiasPatch__PatchToLFO2Gain = 5,
		ESynthModEnvBiasPatch__PatchToLFO1Freq = 6,
		ESynthModEnvBiasPatch__PatchToLFO2Freq = 7,
		ESynthModEnvBiasPatch__Count = 8,
	};


	// Enum /Script/Synthesis.ESynthFilterType
	enum ESynthFilterType
	{
		ESynthFilterType__LowPass = 0,
		ESynthFilterType__HighPass = 1,
		ESynthFilterType__BandPass = 2,
		ESynthFilterType__BandStop = 3,
		ESynthFilterType__Count = 4,
	};


	// Enum /Script/Synthesis.ESynthFilterAlgorithm
	enum ESynthFilterAlgorithm
	{
		ESynthFilterAlgorithm__OnePole = 0,
		ESynthFilterAlgorithm__StateVariable = 1,
		ESynthFilterAlgorithm__Ladder = 2,
		ESynthFilterAlgorithm__Count = 3,
	};


	// Enum /Script/Synthesis.ESynthStereoDelayMode
	enum ESynthStereoDelayMode
	{
		ESynthStereoDelayMode__Normal = 0,
		ESynthStereoDelayMode__Cross = 1,
		ESynthStereoDelayMode__PingPong = 2,
		ESynthStereoDelayMode__Count = 3,
	};


	// Enum /Script/Synthesis.ESynth1PatchSource
	enum ESynth1PatchSource
	{
		ESynth1PatchSource__LFO1 = 0,
		ESynth1PatchSource__LFO2 = 1,
		ESynth1PatchSource__Envelope = 2,
		ESynth1PatchSource__BiasEnvelope = 3,
		ESynth1PatchSource__Count = 4,
	};


	// Enum /Script/Synthesis.ESynth1PatchDestination
	enum ESynth1PatchDestination
	{
		ESynth1PatchDestination__Osc1Gain = 0,
		ESynth1PatchDestination__Osc1Frequency = 1,
		ESynth1PatchDestination__Osc1Pulsewidth = 2,
		ESynth1PatchDestination__Osc2Gain = 3,
		ESynth1PatchDestination__Osc2Frequency = 4,
		ESynth1PatchDestination__Osc2Pulsewidth = 5,
		ESynth1PatchDestination__FilterFrequency = 6,
		ESynth1PatchDestination__FilterQ = 7,
		ESynth1PatchDestination__Gain = 8,
		ESynth1PatchDestination__Pan = 9,
		ESynth1PatchDestination__LFO1Frequency = A,
		ESynth1PatchDestination__LFO1Gain = B,
		ESynth1PatchDestination__LFO2Frequency = C,
		ESynth1PatchDestination__LFO2Gain = D,
		ESynth1PatchDestination__Count = E,
	};


	// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
	enum ESubmixEffectConvolutionReverbBlockSize
	{
		ESubmixEffectConvolutionReverbBlockSize__BlockSize256 = 0,
		ESubmixEffectConvolutionReverbBlockSize__BlockSize512 = 1,
		ESubmixEffectConvolutionReverbBlockSize__BlockSize1024 = 2,
	};


	// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
	enum ESourceEffectDynamicsProcessorType
	{
		ESourceEffectDynamicsProcessorType__Compressor = 0,
		ESourceEffectDynamicsProcessorType__Limiter = 1,
		ESourceEffectDynamicsProcessorType__Expander = 2,
		ESourceEffectDynamicsProcessorType__Gate = 3,
		ESourceEffectDynamicsProcessorType__UpwardsCompressor = 4,
		ESourceEffectDynamicsProcessorType__Count = 5,
	};


	// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
	enum ESourceEffectDynamicsPeakMode
	{
		ESourceEffectDynamicsPeakMode__MeanSquared = 0,
		ESourceEffectDynamicsPeakMode__RootMeanSquared = 1,
		ESourceEffectDynamicsPeakMode__Peak = 2,
		ESourceEffectDynamicsPeakMode__Count = 3,
	};


	// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
	enum EEnvelopeFollowerPeakMode
	{
		EEnvelopeFollowerPeakMode__MeanSquared = 0,
		EEnvelopeFollowerPeakMode__RootMeanSquared = 1,
		EEnvelopeFollowerPeakMode__Peak = 2,
		EEnvelopeFollowerPeakMode__Count = 3,
	};


	// Enum /Script/Synthesis.ESourceEffectFilterCircuit
	enum ESourceEffectFilterCircuit
	{
		ESourceEffectFilterCircuit__OnePole = 0,
		ESourceEffectFilterCircuit__StateVariable = 1,
		ESourceEffectFilterCircuit__Ladder = 2,
		ESourceEffectFilterCircuit__Count = 3,
	};


	// Enum /Script/Synthesis.ESourceEffectFilterType
	enum ESourceEffectFilterType
	{
		ESourceEffectFilterType__LowPass = 0,
		ESourceEffectFilterType__HighPass = 1,
		ESourceEffectFilterType__BandPass = 2,
		ESourceEffectFilterType__BandStop = 3,
		ESourceEffectFilterType__Count = 4,
	};


	// Enum /Script/Synthesis.ESourceEffectFilterParam
	enum ESourceEffectFilterParam
	{
		ESourceEffectFilterParam__FilterFrequency = 0,
		ESourceEffectFilterParam__FilterResonance = 1,
		ESourceEffectFilterParam__Count = 2,
	};


	// Enum /Script/Synthesis.EStereoChannelMode
	enum EStereoChannelMode
	{
		EStereoChannelMode__MidSide = 0,
		EStereoChannelMode__LeftRight = 1,
		EStereoChannelMode__count = 2,
	};


	// Enum /Script/Synthesis.ESourceEffectMotionFilterModSource
	enum ESourceEffectMotionFilterModSource
	{
		ESourceEffectMotionFilterModSource__DistanceFromListener = 0,
		ESourceEffectMotionFilterModSource__SpeedRelativeToListener = 1,
		ESourceEffectMotionFilterModSource__SpeedOfSourceEmitter = 2,
		ESourceEffectMotionFilterModSource__SpeedOfListener = 3,
		ESourceEffectMotionFilterModSource__SpeedOfAngleDelta = 4,
		ESourceEffectMotionFilterModSource__Count = 5,
	};


	// Enum /Script/Synthesis.ESourceEffectMotionFilterModDestination
	enum ESourceEffectMotionFilterModDestination
	{
		ESourceEffectMotionFilterModDestination__FilterACutoffFrequency = 0,
		ESourceEffectMotionFilterModDestination__FilterAResonance = 1,
		ESourceEffectMotionFilterModDestination__FilterAOutputVolumeDB = 2,
		ESourceEffectMotionFilterModDestination__FilterBCutoffFrequency = 3,
		ESourceEffectMotionFilterModDestination__FilterBResonance = 4,
		ESourceEffectMotionFilterModDestination__FilterBOutputVolumeDB = 5,
		ESourceEffectMotionFilterModDestination__FilterMix = 6,
		ESourceEffectMotionFilterModDestination__Count = 7,
	};


	// Enum /Script/Synthesis.ESourceEffectMotionFilterTopology
	enum ESourceEffectMotionFilterTopology
	{
		ESourceEffectMotionFilterTopology__SerialMode = 0,
		ESourceEffectMotionFilterTopology__ParallelMode = 1,
		ESourceEffectMotionFilterTopology__Count = 2,
	};


	// Enum /Script/Synthesis.ESourceEffectMotionFilterCircuit
	enum ESourceEffectMotionFilterCircuit
	{
		ESourceEffectMotionFilterCircuit__OnePole = 0,
		ESourceEffectMotionFilterCircuit__StateVariable = 1,
		ESourceEffectMotionFilterCircuit__Ladder = 2,
		ESourceEffectMotionFilterCircuit__Count = 3,
	};


	// Enum /Script/Synthesis.ESourceEffectMotionFilterType
	enum ESourceEffectMotionFilterType
	{
		ESourceEffectMotionFilterType__LowPass = 0,
		ESourceEffectMotionFilterType__HighPass = 1,
		ESourceEffectMotionFilterType__BandPass = 2,
		ESourceEffectMotionFilterType__BandStop = 3,
		ESourceEffectMotionFilterType__Count = 4,
	};


	// Enum /Script/Synthesis.EPhaserLFOType
	enum EPhaserLFOType
	{
		EPhaserLFOType__Sine = 0,
		EPhaserLFOType__UpSaw = 1,
		EPhaserLFOType__DownSaw = 2,
		EPhaserLFOType__Square = 3,
		EPhaserLFOType__Triangle = 4,
		EPhaserLFOType__Exponential = 5,
		EPhaserLFOType__RandomSampleHold = 6,
		EPhaserLFOType__Count = 7,
	};


	// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
	enum ERingModulatorTypeSourceEffect
	{
		ERingModulatorTypeSourceEffect__Sine = 0,
		ERingModulatorTypeSourceEffect__Saw = 1,
		ERingModulatorTypeSourceEffect__Triangle = 2,
		ERingModulatorTypeSourceEffect__Square = 3,
		ERingModulatorTypeSourceEffect__Count = 4,
	};


	// Enum /Script/Synthesis.EStereoDelaySourceEffect
	enum EStereoDelaySourceEffect
	{
		EStereoDelaySourceEffect__Normal = 0,
		EStereoDelaySourceEffect__Cross = 1,
		EStereoDelaySourceEffect__PingPong = 2,
		EStereoDelaySourceEffect__Count = 3,
	};


	// Enum /Script/Synthesis.EStereoDelayFiltertype
	enum EStereoDelayFiltertype
	{
		EStereoDelayFiltertype__Lowpass = 0,
		EStereoDelayFiltertype__Highpass = 1,
		EStereoDelayFiltertype__Bandpass = 2,
		EStereoDelayFiltertype__Notch = 3,
		EStereoDelayFiltertype__Count = 4,
	};


	// Enum /Script/Synthesis.ESubmixFilterType
	enum ESubmixFilterType
	{
		ESubmixFilterType__LowPass = 0,
		ESubmixFilterType__HighPass = 1,
		ESubmixFilterType__BandPass = 2,
		ESubmixFilterType__BandStop = 3,
		ESubmixFilterType__Count = 4,
	};


	// Enum /Script/Synthesis.ESubmixFilterAlgorithm
	enum ESubmixFilterAlgorithm
	{
		ESubmixFilterAlgorithm__OnePole = 0,
		ESubmixFilterAlgorithm__StateVariable = 1,
		ESubmixFilterAlgorithm__Ladder = 2,
		ESubmixFilterAlgorithm__Count = 3,
	};


	// Enum /Script/Synthesis.ETapLineMode
	enum ETapLineMode
	{
		ETapLineMode__SendToChannel = 0,
		ETapLineMode__Panning = 1,
		ETapLineMode__Disabled = 2,
	};


	// Enum /Script/Synthesis.EGranularSynthEnvelopeType
	enum EGranularSynthEnvelopeType
	{
		EGranularSynthEnvelopeType__Rectangular = 0,
		EGranularSynthEnvelopeType__Triangle = 1,
		EGranularSynthEnvelopeType__DownwardTriangle = 2,
		EGranularSynthEnvelopeType__UpwardTriangle = 3,
		EGranularSynthEnvelopeType__ExponentialDecay = 4,
		EGranularSynthEnvelopeType__ExponentialIncrease = 5,
		EGranularSynthEnvelopeType__Gaussian = 6,
		EGranularSynthEnvelopeType__Hanning = 7,
		EGranularSynthEnvelopeType__Lanczos = 8,
		EGranularSynthEnvelopeType__Cosine = 9,
		EGranularSynthEnvelopeType__CosineSquared = A,
		EGranularSynthEnvelopeType__Welch = B,
		EGranularSynthEnvelopeType__Blackman = C,
		EGranularSynthEnvelopeType__BlackmanHarris = D,
		EGranularSynthEnvelopeType__Count = E,
	};


	// Enum /Script/Synthesis.EGranularSynthSeekType
	enum EGranularSynthSeekType
	{
		EGranularSynthSeekType__FromBeginning = 0,
		EGranularSynthSeekType__FromCurrentPosition = 1,
		EGranularSynthSeekType__Count = 2,
	};


	// Enum /Script/Synthesis.CurveInterpolationType
	enum CurveInterpolationType
	{
		CurveInterpolationType__AUTOINTERP = 0,
		CurveInterpolationType__LINEAR = 1,
		CurveInterpolationType__CONSTANT = 2,
	};


	// Enum /Script/Synthesis.ESamplePlayerSeekType
	enum ESamplePlayerSeekType
	{
		ESamplePlayerSeekType__FromBeginning = 0,
		ESamplePlayerSeekType__FromCurrentPosition = 1,
		ESamplePlayerSeekType__FromEnd = 2,
		ESamplePlayerSeekType__Count = 3,
	};


	// Enum /Script/Synthesis.ESynthKnobSize
	enum ESynthKnobSize
	{
		ESynthKnobSize__Medium = 0,
		ESynthKnobSize__Large = 1,
		ESynthKnobSize__Count = 2,
	};


	// Enum /Script/Synthesis.ESynthSlateSizeType
	enum ESynthSlateSizeType
	{
		ESynthSlateSizeType__Small = 0,
		ESynthSlateSizeType__Medium = 1,
		ESynthSlateSizeType__Large = 2,
		ESynthSlateSizeType__Count = 3,
	};


	// Enum /Script/Synthesis.ESynthSlateColorStyle
	enum ESynthSlateColorStyle
	{
		ESynthSlateColorStyle__Light = 0,
		ESynthSlateColorStyle__Dark = 1,
		ESynthSlateColorStyle__Count = 2,
	};

}
