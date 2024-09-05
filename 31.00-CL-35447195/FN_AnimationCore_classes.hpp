#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimationCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AnimationCore.AnimationDataSourceRegistry
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAnimationDataSourceRegistry : public UObject	
	{
	public:
		TMap DataSources; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationCore.AnimationDataSourceRegistry");
			return ret;
		}
	};

}
