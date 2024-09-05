#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: F5PlayerFactory
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class F5PlayerFactory.F5PlayerFactorySettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UF5PlayerFactorySettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/F5PlayerFactory.F5PlayerFactorySettings");
			return ret;
		}
	};

}
