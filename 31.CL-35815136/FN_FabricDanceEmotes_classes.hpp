#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricDanceEmotes
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FabricDanceEmotes.FabricDanceSynchronizerComponent
	// Inherited from UMontageBeatSyncComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x140 - 0x120)
	class UFabricDanceSynchronizerComponent : public UMontageBeatSyncComponent	
	{
	public:
		TWeakObjectPtr<UClass*> DeviceCableManagerClass; // 0x120(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricDanceEmotes.FabricDanceSynchronizerComponent");
			return ret;
		}
	};

}
