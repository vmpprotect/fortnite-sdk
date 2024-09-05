#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EngineDamageTypes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C
	// Inherited from UDamageType -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDmgTypeBP_Environmental_C : public UDamageType	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
			return ret;
		}
	};

}
