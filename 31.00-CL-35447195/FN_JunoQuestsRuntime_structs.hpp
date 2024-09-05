#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoQuestsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoQuestsRuntime.FTUEQuestBundleWithRequiredTag
	// Size: 0x10 (0x10 - 0x0)
	struct FFTUEQuestBundleWithRequiredTag	
	{
	public:
		UFortChallengeBundleItemDefinition FTUEQuestBundleDef; // 0x0(0x8)
		FGameplayTag RequiredTagInPreviousBundleForTracking; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};

}
