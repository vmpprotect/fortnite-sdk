#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoQuestsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct JunoQuestsRuntime.FTUEQuestBundleWithRequiredTag
	// Size: 0x10 (0x10 - 0x0)
	struct FFTUEQuestBundleWithRequiredTag	
	{
	public:
		UFortChallengeBundleItemDefinition* FTUEQuestBundleDef; // 0x0(0x8)
		FGameplayTag RequiredTagInPreviousBundleForTracking; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};

}
