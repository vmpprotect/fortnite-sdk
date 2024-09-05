#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MemoryUsageQueries
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MemoryUsageQueries.MemoryUsageQueriesConfig
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UMemoryUsageQueriesConfig : public UObject	
	{
	public:
		TArray<FCollectionInfo> Collections; // 0x28(0x10)
		TMap<FString, FString> SavingsPresets; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MemoryUsageQueries.MemoryUsageQueriesConfig");
			return ret;
		}
	};

}
