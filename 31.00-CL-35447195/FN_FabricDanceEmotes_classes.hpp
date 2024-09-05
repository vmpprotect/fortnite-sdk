#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricDanceEmotes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FabricDanceEmotes.FabricDanceSynchronizerComponent
	// Inherited from UMontageBeatSyncComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x140 - 0x120)
	class UFabricDanceSynchronizerComponent : public UMontageBeatSyncComponent	
	{
	public:
		TWeakObjectPtr DeviceCableManagerClass; // 0x120(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricDanceEmotes.FabricDanceSynchronizerComponent");
			return ret;
		}
	};

}
