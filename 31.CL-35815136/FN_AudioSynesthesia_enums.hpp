#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioSynesthesia
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
	enum EConstantQNormalizationEnum
	{
		EConstantQNormalizationEnum__EqualEuclideanNorm = 0,
		EConstantQNormalizationEnum__EqualEnergy = 1,
		EConstantQNormalizationEnum__EqualAmplitude = 2,
	};


	// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
	enum EConstantQFFTSizeEnum
	{
		EConstantQFFTSizeEnum__Min = 0,
		EConstantQFFTSizeEnum__XXSmall = 1,
		EConstantQFFTSizeEnum__XSmall = 2,
		EConstantQFFTSizeEnum__Small = 3,
		EConstantQFFTSizeEnum__Medium = 4,
		EConstantQFFTSizeEnum__Large = 5,
		EConstantQFFTSizeEnum__XLarge = 6,
		EConstantQFFTSizeEnum__XXLarge = 7,
		EConstantQFFTSizeEnum__Max = 8,
	};


	// Enum /Script/AudioSynesthesia.ELoudnessCurveTypeEnum
	enum ELoudnessCurveTypeEnum
	{
		ELoudnessCurveTypeEnum__A = 0,
		ELoudnessCurveTypeEnum__B = 1,
		ELoudnessCurveTypeEnum__C = 2,
		ELoudnessCurveTypeEnum__D = 3,
		ELoudnessCurveTypeEnum__None = 4,
	};


	// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
	enum ELoudnessNRTCurveTypeEnum
	{
		ELoudnessNRTCurveTypeEnum__A = 0,
		ELoudnessNRTCurveTypeEnum__B = 1,
		ELoudnessNRTCurveTypeEnum__C = 2,
		ELoudnessNRTCurveTypeEnum__D = 3,
		ELoudnessNRTCurveTypeEnum__None = 4,
	};


	// Enum /Script/AudioSynesthesia.EMeterPeakType
	enum EMeterPeakType
	{
		EMeterPeakType__MeanSquared = 0,
		EMeterPeakType__RootMeanSquared = 1,
		EMeterPeakType__Peak = 2,
		EMeterPeakType__Count = 3,
	};

}
