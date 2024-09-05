#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamMapRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMJamMapRuntime.JamIslandPlayspaceComponent_ServerExpiration
	// Inherited from UPlayspaceComponent_ServerExpiration -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1B8 - 0x1B8)
	class UJamIslandPlayspaceComponent_ServerExpiration : public UPlayspaceComponent_ServerExpiration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamMapRuntime.JamIslandPlayspaceComponent_ServerExpiration");
			return ret;
		}
	};

}
