#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarAudio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DelMarAudio.DelMarStateMix
	// Size: 0x38 (0x38 - 0x0)
	struct FDelMarStateMix	
	{
	public:
		FGameplayTag MixStateTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FAudioMixModifierGroup ActorMixModifiers; // 0x8(0x18)
		USoundControlBusMix* ControlBusMix; // 0x20(0x8)
		bool bAutoDeactivate; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float duration; // 0x2C(0x4)
		FGameplayTag FallbackState; // 0x30(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarAudio.DelMarStateMixCollection
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarStateMixCollection	
	{
	public:
		FName Group; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FDelMarStateMix> Mixes; // 0x8(0x10)
	};


	// Struct DelMarAudio.DelMarEvent_AudioStateComponent
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_AudioStateComponent	
	{
	public:
		UDelMarAudioStatePlayspaceComponent* StateComponent; // 0x0(0x8)
	};


	// Struct DelMarAudio.DelmarAudioVirtualizationSettings
	// Size: 0xC (0xC - 0x0)
	struct FDelmarAudioVirtualizationSettings	
	{
	public:
		int32_t MaxNumPlayers; // 0x0(0x4)
		int32_t MaxNumDistantPlayers; // 0x4(0x4)
		float DistantPlayerThreshold; // 0x8(0x4)
	};

}
