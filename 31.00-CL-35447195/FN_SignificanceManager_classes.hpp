#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SignificanceManager
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SignificanceManager.SignificanceManager
	// Inherited from UObject
	// Size: 0x110 (0x138 - 0x28)
	class USignificanceManager : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0xF8]; // 0x28(0xF8) UNKNOWN PROPERTY
		FSoftClassPath SignificanceManagerClassName; // 0x120(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SignificanceManager.SignificanceManager");
			return ret;
		}
	};

}
