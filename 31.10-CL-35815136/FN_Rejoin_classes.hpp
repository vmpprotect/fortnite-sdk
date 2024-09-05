#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Rejoin
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_7[0x15D]; // 0x2B(0x15D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Rejoin.RejoinCheck");
			return ret;
		}
	};

}
