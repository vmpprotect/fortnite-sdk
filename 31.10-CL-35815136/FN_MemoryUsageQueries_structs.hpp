#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MemoryUsageQueries
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MemoryUsageQueries.CollectionInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FCollectionInfo	
	{
	public:
		FString Name; // 0x0(0x10)
		TArray<FString> Includes; // 0x10(0x10)
		TArray<FString> Excludes; // 0x20(0x10)
		float BudgetMB; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};

}
