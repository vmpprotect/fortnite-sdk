#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioMixer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/AudioMixer.EAudioDeviceChangedRole
	enum EAudioDeviceChangedRole
	{
		EAudioDeviceChangedRole__Invalid = 0,
		EAudioDeviceChangedRole__Console = 1,
		EAudioDeviceChangedRole__Multimedia = 2,
		EAudioDeviceChangedRole__Communications = 3,
		EAudioDeviceChangedRole__Count = 4,
	};


	// Enum /Script/AudioMixer.EAudioDeviceChangedState
	enum EAudioDeviceChangedState
	{
		EAudioDeviceChangedState__Invalid = 0,
		EAudioDeviceChangedState__Active = 1,
		EAudioDeviceChangedState__Disabled = 2,
		EAudioDeviceChangedState__NotPresent = 3,
		EAudioDeviceChangedState__Unplugged = 4,
		EAudioDeviceChangedState__Count = 5,
	};


	// Enum /Script/AudioMixer.EAudioMixerChannelType
	enum EAudioMixerChannelType
	{
		EAudioMixerChannelType__FrontLeft = 0,
		EAudioMixerChannelType__FrontRight = 1,
		EAudioMixerChannelType__FrontCenter = 2,
		EAudioMixerChannelType__LowFrequency = 3,
		EAudioMixerChannelType__BackLeft = 4,
		EAudioMixerChannelType__BackRight = 5,
		EAudioMixerChannelType__FrontLeftOfCenter = 6,
		EAudioMixerChannelType__FrontRightOfCenter = 7,
		EAudioMixerChannelType__BackCenter = 8,
		EAudioMixerChannelType__SideLeft = 9,
		EAudioMixerChannelType__SideRight = A,
		EAudioMixerChannelType__TopCenter = B,
		EAudioMixerChannelType__TopFrontLeft = C,
		EAudioMixerChannelType__TopFrontCenter = D,
		EAudioMixerChannelType__TopFrontRight = E,
		EAudioMixerChannelType__TopBackLeft = F,
		EAudioMixerChannelType__TopBackCenter = 10,
		EAudioMixerChannelType__TopBackRight = 11,
		EAudioMixerChannelType__Unknown = 12,
		EAudioMixerChannelType__ChannelTypeCount = 13,
		EAudioMixerChannelType__DefaultChannel = 0,
	};


	// Enum /Script/AudioMixer.EAudioMixerStreamDataFormatType
	enum EAudioMixerStreamDataFormatType
	{
		EAudioMixerStreamDataFormatType__Unknown = 0,
		EAudioMixerStreamDataFormatType__Float = 1,
		EAudioMixerStreamDataFormatType__Int16 = 2,
		EAudioMixerStreamDataFormatType__Unsupported = 3,
	};


	// Enum /Script/AudioMixer.ESwapAudioOutputDeviceResultState
	enum ESwapAudioOutputDeviceResultState
	{
		ESwapAudioOutputDeviceResultState__Failure = 0,
		ESwapAudioOutputDeviceResultState__Success = 1,
		ESwapAudioOutputDeviceResultState__None = 2,
	};


	// Enum /Script/AudioMixer.ERequiredSubmixes
	enum ERequiredSubmixes
	{
		ERequiredSubmixes__Main = 0,
		ERequiredSubmixes__BaseDefault = 1,
		ERequiredSubmixes__Reverb = 2,
		ERequiredSubmixes__EQ = 3,
		ERequiredSubmixes__Count = 4,
	};


	// Enum /Script/AudioMixer.ESourceManagerRenderThreadPhase
	enum ESourceManagerRenderThreadPhase
	{
		Begin = 0,
		PumpMpscCmds = 1,
		PumpCmds = 2,
		ProcessModulators = 3,
		UpdatePendingReleaseData = 4,
		GenerateSrcAudio_WithBusses = 5,
		ComputeBusses = 6,
		GenerateSrcAudio_WithoutBusses = 7,
		UpdateBusses = 8,
		SpatialInterface_OnAllSourcesProcessed = 9,
		SourceDataOverride_OnAllSourcesProcessed = A,
		UpdateGameThreadCopies = B,
		Finished = C,
	};


	// Enum /Script/AudioMixer.EMusicalNoteName
	enum EMusicalNoteName
	{
		EMusicalNoteName__C = 0,
		EMusicalNoteName__Db = 1,
		EMusicalNoteName__D = 2,
		EMusicalNoteName__Eb = 3,
		EMusicalNoteName__E = 4,
		EMusicalNoteName__F = 5,
		EMusicalNoteName__Gb = 6,
		EMusicalNoteName__G = 7,
		EMusicalNoteName__Ab = 8,
		EMusicalNoteName__A = 9,
		EMusicalNoteName__Bb = A,
		EMusicalNoteName__B = B,
	};


	// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
	enum ESubmixEffectDynamicsProcessorType
	{
		ESubmixEffectDynamicsProcessorType__Compressor = 0,
		ESubmixEffectDynamicsProcessorType__Limiter = 1,
		ESubmixEffectDynamicsProcessorType__Expander = 2,
		ESubmixEffectDynamicsProcessorType__Gate = 3,
		ESubmixEffectDynamicsProcessorType__UpwardsCompressor = 4,
		ESubmixEffectDynamicsProcessorType__Count = 5,
	};


	// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
	enum ESubmixEffectDynamicsPeakMode
	{
		ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
		ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
		ESubmixEffectDynamicsPeakMode__Peak = 2,
		ESubmixEffectDynamicsPeakMode__Count = 3,
	};


	// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
	enum ESubmixEffectDynamicsChannelLinkMode
	{
		ESubmixEffectDynamicsChannelLinkMode__Disabled = 0,
		ESubmixEffectDynamicsChannelLinkMode__Average = 1,
		ESubmixEffectDynamicsChannelLinkMode__Peak = 2,
		ESubmixEffectDynamicsChannelLinkMode__Count = 3,
	};


	// Enum /Script/AudioMixer.ESubmixEffectDynamicsKeySource
	enum ESubmixEffectDynamicsKeySource
	{
		ESubmixEffectDynamicsKeySource__Default = 0,
		ESubmixEffectDynamicsKeySource__AudioBus = 1,
		ESubmixEffectDynamicsKeySource__Submix = 2,
		ESubmixEffectDynamicsKeySource__Count = 3,
	};

}
