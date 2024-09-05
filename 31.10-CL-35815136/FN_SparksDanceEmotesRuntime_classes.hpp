#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksDanceEmotesRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksDanceEmotesRuntime.SparksDanceSynchronizerComponent
	// Inherited from UMontageBeatSyncComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x120 - 0x120)
	class USparksDanceSynchronizerComponent : public UMontageBeatSyncComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksDanceEmotesRuntime.SparksDanceSynchronizerComponent");
			return ret;
		}
	};

}
