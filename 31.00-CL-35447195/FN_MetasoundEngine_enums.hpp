#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MetasoundEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
	enum EMetaSoundMessageLevel
	{
		EMetaSoundMessageLevel__Error = 0,
		EMetaSoundMessageLevel__Warning = 1,
		EMetaSoundMessageLevel__Info = 2,
	};


	// Enum /Script/MetasoundEngine.EMetaSoundOutputAudioFormat
	enum EMetaSoundOutputAudioFormat
	{
		EMetaSoundOutputAudioFormat__Mono = 0,
		EMetaSoundOutputAudioFormat__Stereo = 1,
		EMetaSoundOutputAudioFormat__Quad = 2,
		EMetaSoundOutputAudioFormat__FiveDotOne = 3,
		EMetaSoundOutputAudioFormat__SevenDotOne = 4,
		EMetaSoundOutputAudioFormat__COUNT = 5,
	};


	// Enum /Script/MetasoundEngine.EMetaSoundBuilderResult
	enum EMetaSoundBuilderResult
	{
		EMetaSoundBuilderResult__Succeeded = 0,
		EMetaSoundBuilderResult__Failed = 1,
	};

}
