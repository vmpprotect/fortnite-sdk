#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameFeatureDataTables
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GameFeatureDataTables.GameFeatureDataTableEntry
	// Size: 0x48 (0x48 - 0x0)
	struct FGameFeatureDataTableEntry	
	{
	public:
		TArray CompositeDataTables; // 0x0(0x10)
		TArray ParentDataTables; // 0x10(0x10)
		UScriptStruct StructType; // 0x20(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
	};

}
