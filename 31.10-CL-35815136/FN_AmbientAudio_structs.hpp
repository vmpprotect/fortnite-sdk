#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AmbientAudio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AmbientAudio.AmbientAudioBase
	// Size: 0xB8 (0xB8 - 0x0)
	struct FAmbientAudioBase	
	{
	public:
		TWeakObjectPtr<USoundBase*> Sound; // 0x0(0x20)
		FGameplayTagQuery Requirements; // 0x20(0x48)
		FAudioGameplayRequirements PlaybackRequirements; // 0x68(0x50)
	};


	// Struct AmbientAudio.AmbientAudioLoop
	// Inherited from FAmbientAudioBase
	// Size: 0x0 (0xB8 - 0xB8)
	struct FAmbientAudioLoop : public FAmbientAudioBase	
	{
	public:
	};


	// Struct AmbientAudio.AmbientAudioOneShot
	// Inherited from FAmbientAudioBase
	// Size: 0x20 (0xD8 - 0xB8)
	struct FAmbientAudioOneShot : public FAmbientAudioBase	
	{
	public:
		FVector2D RetriggerTimeRange; // 0xB8(0x10)
		FVector2D TriggerDistanceRange; // 0xC8(0x10)
	};

}
