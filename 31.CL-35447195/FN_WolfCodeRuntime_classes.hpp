#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WolfCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WolfCodeRuntime.FortCheatManager_Wolf
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCheatManager_Wolf : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WolfCodeRuntime.FortCheatManager_Wolf");
			return ret;
		}

		void WolfEnable(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D5CF58
	};

}
