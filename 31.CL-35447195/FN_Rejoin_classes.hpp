#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Rejoin
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Rejoin.RejoinCheck
	// Inherited from UObject
	// Size: 0x160 (0x188 - 0x28)
	class URejoinCheck : public UObject	
	{
	public:
		ERejoinStatus LastKnownStatus; // 0x28(0x1)
		bool bRejoinAfterCheck; // 0x29(0x1)
		bool bAttemptingRejoin; // 0x2A(0x1)
		unsigned char UnknownData01_7[0x15D]; // 0x2B(0x15D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Rejoin.RejoinCheck");
			return ret;
		}
	};

}
