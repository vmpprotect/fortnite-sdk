#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseAINavigation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseAINavigation.AINavRelevantEntityProxy
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UAINavRelevantEntityProxy : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xB8]; // 0x28(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAINavigation.AINavRelevantEntityProxy");
			return ret;
		}
	};

}
