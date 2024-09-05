#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameFeatureDataTables
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameFeatureDataTables.GameFeatureDataTableEntry
	// Size: 0x48 (0x48 - 0x0)
	struct FGameFeatureDataTableEntry	
	{
	public:
		TArray<UCompositeDataTable*> CompositeDataTables; // 0x0(0x10)
		TArray<UDataTable*> ParentDataTables; // 0x10(0x10)
		UScriptStruct* StructType; // 0x20(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
	};

}
