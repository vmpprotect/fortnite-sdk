#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SignificanceManager
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SignificanceManager.SignificanceManager
	// Inherited from UObject
	// Size: 0x110 (0x138 - 0x28)
	class USignificanceManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0xF8]; // 0x28(0xF8) UNKNOWN PROPERTY
		FSoftClassPath SignificanceManagerClassName; // 0x120(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SignificanceManager.SignificanceManager");
			return ret;
		}
	};

}
