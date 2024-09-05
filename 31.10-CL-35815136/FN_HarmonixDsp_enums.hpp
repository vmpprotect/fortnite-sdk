#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixDsp
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/HarmonixDsp.EFusionPatchAudioLoadResult
	enum EFusionPatchAudioLoadResult
	{
		EFusionPatchAudioLoadResult__Success = 0,
		EFusionPatchAudioLoadResult__Fail = 1,
		EFusionPatchAudioLoadResult__Cancelled = 2,
	};


	// Enum /Script/HarmonixDsp.EAdsrTarget
	enum EAdsrTarget
	{
		EAdsrTarget__Volume = 0,
		EAdsrTarget__FilterFreq = 1,
		EAdsrTarget__Num = 2,
		EAdsrTarget__Invalid = 3,
	};


	// Enum /Script/HarmonixDsp.ESpeakerChannelAssignment
	enum ESpeakerChannelAssignment
	{
		ESpeakerChannelAssignment__LeftFront = 0,
		ESpeakerChannelAssignment__RightFront = 1,
		ESpeakerChannelAssignment__Center = 2,
		ESpeakerChannelAssignment__LFE = 3,
		ESpeakerChannelAssignment__LeftSurround = 4,
		ESpeakerChannelAssignment__RightSurround = 5,
		ESpeakerChannelAssignment__LeftRear = 6,
		ESpeakerChannelAssignment__RightRear = 7,
		ESpeakerChannelAssignment__FrontPair = 8,
		ESpeakerChannelAssignment__CenterAndLFE = 9,
		ESpeakerChannelAssignment__SurroundPair = A,
		ESpeakerChannelAssignment__RearPair = B,
		ESpeakerChannelAssignment__AmbisonicW = C,
		ESpeakerChannelAssignment__AmbisonicX = D,
		ESpeakerChannelAssignment__AmbisonicY = E,
		ESpeakerChannelAssignment__AmbisonicZ = F,
		ESpeakerChannelAssignment__AmbisonicWXPair = 10,
		ESpeakerChannelAssignment__AmbisonicYZPair = 11,
		ESpeakerChannelAssignment__UnspecifiedMono = 12,
		ESpeakerChannelAssignment__Num = 13,
		ESpeakerChannelAssignment__Invalid = 14,
	};


	// Enum /Script/HarmonixDsp.EBiquadFilterType
	enum EBiquadFilterType
	{
		EBiquadFilterType__LowPass = 0,
		EBiquadFilterType__HighPass = 1,
		EBiquadFilterType__BandPass = 2,
		EBiquadFilterType__Peaking = 3,
		EBiquadFilterType__LowShelf = 4,
		EBiquadFilterType__HighShelf = 5,
		EBiquadFilterType__Num = 6,
		EBiquadFilterType__None = 7,
	};


	// Enum /Script/HarmonixDsp.EDelayStereoType
	enum EDelayStereoType
	{
		EDelayStereoType__Default = 0,
		EDelayStereoType__CustomSpread = 1,
		EDelayStereoType__PingPongForceLR = 2,
		EDelayStereoType__PingPongSum = 3,
		EDelayStereoType__PingPongIndividual = 4,
		EDelayStereoType__Num = 5,
	};


	// Enum /Script/HarmonixDsp.EDelayFilterType
	enum EDelayFilterType
	{
		EDelayFilterType__LowPass = 0,
		EDelayFilterType__HighPass = 1,
		EDelayFilterType__BandPass = 2,
		EDelayFilterType__Num = 3,
	};


	// Enum /Script/HarmonixDsp.EDistortionTypeV1
	enum EDistortionTypeV1
	{
		EDistortionTypeV1__Clean = 0,
		EDistortionTypeV1__Warm = 1,
		EDistortionTypeV1__Dirty = 2,
		EDistortionTypeV1__Soft = 3,
		EDistortionTypeV1__Asymmetric = 4,
		EDistortionTypeV1__Num = 5,
	};


	// Enum /Script/HarmonixDsp.EDistortionTypeV2
	enum EDistortionTypeV2
	{
		EDistortionTypeV2__Clean = 0,
		EDistortionTypeV2__Warm = 1,
		EDistortionTypeV2__Clip = 2,
		EDistortionTypeV2__Soft = 3,
		EDistortionTypeV2__Asymmetric = 4,
		EDistortionTypeV2__Cruncher = 5,
		EDistortionTypeV2__CaptCrunch = 6,
		EDistortionTypeV2__Rectifier = 7,
		EDistortionTypeV2__Num = 8,
	};


	// Enum /Script/HarmonixDsp.EKeyzoneSelectMode
	enum EKeyzoneSelectMode
	{
		EKeyzoneSelectMode__Layers = 0,
		EKeyzoneSelectMode__Random = 1,
		EKeyzoneSelectMode__RandomWithRepetition = 2,
		EKeyzoneSelectMode__Cycle = 3,
		EKeyzoneSelectMode__Num = 4,
		EKeyzoneSelectMode__Invalid = 5,
	};


	// Enum /Script/HarmonixDsp.EWaveShape
	enum EWaveShape
	{
		EWaveShape__Sine = 0,
		EWaveShape__Square = 1,
		EWaveShape__SawUp = 2,
		EWaveShape__SawDown = 3,
		EWaveShape__Triangle = 4,
		EWaveShape__Random = 5,
		EWaveShape__Num = 6,
		EWaveShape__None = 7,
	};


	// Enum /Script/HarmonixDsp.ELfoTarget
	enum ELfoTarget
	{
		ELfoTarget__Pan = 0,
		ELfoTarget__Pitch = 1,
		ELfoTarget__FilterFreq = 2,
		ELfoTarget__Num = 3,
		ELfoTarget__None = 4,
	};


	// Enum /Script/HarmonixDsp.EModulatorTarget
	enum EModulatorTarget
	{
		EModulatorTarget__StartPoint = 0,
		EModulatorTarget__Pitch = 1,
		EModulatorTarget__Num = 2,
		EModulatorTarget__None = 3,
	};


	// Enum /Script/HarmonixDsp.EPannerMode
	enum EPannerMode
	{
		EPannerMode__LegacyStereo = 0,
		EPannerMode__Stereo = 1,
		EPannerMode__Surround = 2,
		EPannerMode__PolarSurround = 3,
		EPannerMode__DirectAssignment = 4,
		EPannerMode__Num = 5,
		EPannerMode__Invalid = 6,
	};


	// Enum /Script/HarmonixDsp.EPortamentoMode
	enum EPortamentoMode
	{
		EPortamentoMode__Legato = 0,
		EPortamentoMode__Persistent = 1,
		EPortamentoMode__Num = 2,
		EPortamentoMode__None = 3,
	};


	// Enum /Script/HarmonixDsp.ETimeSyncOption
	enum ETimeSyncOption
	{
		ETimeSyncOption__None = 0,
		ETimeSyncOption__TempoSync = 1,
		ETimeSyncOption__SpeedScale = 2,
		ETimeSyncOption__Num = 3,
	};


	// Enum /Script/HarmonixDsp.EParameterType
	enum EParameterType
	{
		EParameterType__Bool = 0,
		EParameterType__Double = 1,
		EParameterType__Float = 2,
		EParameterType__Int8 = 3,
		EParameterType__Int16 = 4,
		EParameterType__Int32 = 5,
		EParameterType__Int64 = 6,
		EParameterType__Name = 7,
		EParameterType__String = 8,
		EParameterType__UInt8 = 9,
		EParameterType__UInt16 = A,
		EParameterType__UInt32 = B,
		EParameterType__UInt64 = C,
		EParameterType__Num = D,
		EParameterType__Invalid = E,
	};


	// Enum /Script/HarmonixDsp.EVocoderBandConfig
	enum EVocoderBandConfig
	{
		EVocoderBandConfig__k4 = 0,
		EVocoderBandConfig__k8 = 1,
		EVocoderBandConfig__k16 = 2,
		EVocoderBandConfig__k32 = 3,
		EVocoderBandConfig__k64 = 4,
		EVocoderBandConfig__k128 = 5,
		EVocoderBandConfig__k256 = 6,
		EVocoderBandConfig__Num = 7,
		EVocoderBandConfig__None = 8,
	};

}
