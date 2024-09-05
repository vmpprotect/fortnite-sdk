#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksDanceEmotesRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
