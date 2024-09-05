#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MemoryUsageQueries
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MemoryUsageQueries.MemoryUsageQueriesConfig
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UMemoryUsageQueriesConfig : public UObject	
	{
	public:
		TArray Collections; // 0x28(0x10)
		TMap SavingsPresets; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MemoryUsageQueries.MemoryUsageQueriesConfig");
			return ret;
		}
	};

}
