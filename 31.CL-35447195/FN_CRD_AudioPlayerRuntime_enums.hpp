#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_AudioPlayerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
