#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BasicType
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Custom/TEnumAsByte
	// Size: 0x1 (0x1 - 0x0)
	class TEnumAsByte	
	{
	public:
		uint8_t value; // 0x0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Custom/TEnumAsByte");
			return ret;
		}
	};

}
