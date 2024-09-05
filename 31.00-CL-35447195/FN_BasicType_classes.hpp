#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BasicType
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
