#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EngineDamageTypes
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
