#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MemoryUsageQueries
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MemoryUsageQueries.CollectionInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FCollectionInfo	
	{
	public:
		FString Name; // 0x0(0x10)
		TArray Includes; // 0x10(0x10)
		TArray Excludes; // 0x20(0x10)
		float BudgetMB; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};

}
