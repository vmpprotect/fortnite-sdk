#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseAINavigation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseAINavigation.AINavRelevantEntityProxy
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UAINavRelevantEntityProxy : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xB8]; // 0x28(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAINavigation.AINavRelevantEntityProxy");
			return ret;
		}
	};

}
