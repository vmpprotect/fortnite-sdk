#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_AudioPlayerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/CRD_AudioPlayerRuntime.ECreativeAudioPlayerTargetListener
	enum ECreativeAudioPlayerTargetListener
	{
		ECreativeAudioPlayerTargetListener__None = 0,
		ECreativeAudioPlayerTargetListener__Instigator = 1,
		ECreativeAudioPlayerTargetListener__RegisteredPlayers = 2,
		ECreativeAudioPlayerTargetListener__NonRegisteredPlayers = 4,
		ECreativeAudioPlayerTargetListener__Everyone = 6,
	};


	// Enum /Script/CRD_AudioPlayerRuntime.ECreativeAudioPlayerTargetLocation
	enum ECreativeAudioPlayerTargetLocation
	{
		ECreativeAudioPlayerTargetLocation__None = 0,
		ECreativeAudioPlayerTargetLocation__Device = 1,
		ECreativeAudioPlayerTargetLocation__LocalPlayer = 2,
		ECreativeAudioPlayerTargetLocation__RegisteredPlayers = 4,
		ECreativeAudioPlayerTargetLocation__InstigatingPlayer = 8,
		ECreativeAudioPlayerTargetLocation__All = F,
	};


	// Enum /Script/CRD_AudioPlayerRuntime.EAutoplayOptions
	enum EAutoplayOptions
	{
		EAutoplayOptions__None = 0,
		EAutoplayOptions__Create = 1,
		EAutoplayOptions__WaitingForPlayer = 2,
		EAutoplayOptions__Countdown = 4,
		EAutoplayOptions__Gameplay = 8,
		EAutoplayOptions__RoundEnd = 10,
		EAutoplayOptions__GameEnd = 20,
	};

}
